---
layout: post
title: "Vaultwarden and my struggle with HTTPS"
date: 2024-12-15
tags: [reinforcement-learning, debugging, robotics]
permalink: /posts/2025-12-22-vaultwarden-setup-selfhosting/
---

Reinforcement learning training can fail in dozens of subtle ways. The reward goes up for 100 episodes, then crashes. The agent learns one behavior and ignores everything else. The policy converges to something that works in simulation but fails immediately on real hardware.

This post covers practical debugging strategies I've developed while training RL agents for drone navigation.

## The Problem with RL Debugging

Unlike supervised learning, you can't just look at a batch of data and see what's wrong. The agent is generating its own data, and that data changes as the policy changes. Failures cascade in non-obvious ways.

Common failure modes:
- Reward hacking (agent exploits unintended loopholes)
- Catastrophic forgetting (learns new behavior, forgets old)
- Local optima (gets stuck in suboptimal strategy)
- Numerical instability (gradients explode or vanish)
- Environment issues (wrong observations, broken resets)

## Step 1: Verify the Environment

Before touching the RL algorithm, make sure your environment is sane.

### Check observations

```python
import numpy as np

# Log observations for a few episodes
obs = env.reset()
for step in range(100):
    print(f"Step {step}")
    print(f"Obs shape: {obs.shape}")
    print(f"Obs range: [{obs.min():.3f}, {obs.max():.3f}]")
    print(f"Obs mean: {obs.mean():.3f}, std: {obs.std():.3f}")
    
    action = env.action_space.sample()
    obs, reward, done, info = env.step(action)
    
    if done:
        obs = env.reset()
```

Look for:
- Observations always zero or constant
- Extreme values (1e10, NaN, inf)
- Wrong shape or dtype
- Unexpected distributions

### Verify rewards

```python
# Test reward function with known good/bad states
episode_rewards = []
for episode in range(10):
    obs = env.reset()
    total_reward = 0
    
    for step in range(env.max_steps):
        action = policy.get_action(obs)  # or random
        obs, reward, done, info = env.step(action)
        total_reward += reward
        
        if done:
            break
    
    episode_rewards.append(total_reward)
    print(f"Episode {episode}: {total_reward:.2f}")

print(f"Mean reward: {np.mean(episode_rewards):.2f}")
print(f"Std: {np.std(episode_rewards):.2f}")
```

Common reward bugs:
- Always returns zero
- Sign is flipped (negative when should be positive)
- Scale is wrong (too large or too small)
- Sparse rewards that are too rare

### Test resets

```python
# Make sure reset() properly resets the environment
states_after_reset = []
for i in range(10):
    obs = env.reset()
    states_after_reset.append(obs.copy())

# These should NOT all be identical
for i, state in enumerate(states_after_reset):
    print(f"Reset {i}: {state[:5]}")  # First 5 elements
```

If all resets give identical states, your agent might overfit to the initial condition.

## Step 2: Simplify the Task

Start with the easiest possible version of your task. For drone navigation, I used this progression:

1. **Hover in place** (just maintain altitude)
2. **Move to fixed target** (no obstacles)
3. **Move to random targets** (still no obstacles)
4. **Add simple obstacles** (single static box)
5. **Full environment** (multiple dynamic obstacles)

Train each stage until it works reliably before moving to the next.

## Step 3: Monitor Key Metrics

Don't just watch the reward curve. Track these metrics during training:

```python
# In your training loop
metrics = {
    'episode_reward': episode_reward,
    'episode_length': step_count,
    'policy_loss': policy_loss.item(),
    'value_loss': value_loss.item(),
    'entropy': entropy.item(),
    'explained_variance': explained_var,
    'kl_divergence': kl_div,
}

logger.log_metrics(metrics, step=global_step)
```

**What to watch:**
- **Entropy**: Should decrease gradually, not drop to zero
- **KL divergence**: Sudden spikes indicate policy changed too much
- **Explained variance**: Should be > 0 and increasing
- **Episode length**: If constant at max steps, agent might not be learning terminal states

## Step 4: Check for Reward Hacking

The agent will exploit any loophole in your reward function.

### Example: Drone hovering task

**Bad reward**:
```python
reward = -abs(current_altitude - target_altitude)
```

**Problem**: Agent learns to crash immediately (ends episode, minimizes cumulative negative reward).

**Better reward**:
```python
reward = -abs(current_altitude - target_altitude)
if crashed:
    reward -= 100  # Big penalty for crashing
```

**Problem**: Agent learns to fly very high (no crash penalty, but far from target).

**Best reward**:
```python
altitude_error = abs(current_altitude - target_altitude)
reward = -altitude_error

if crashed:
    reward -= 100
elif altitude_error < 0.5:
    reward += 10  # Bonus for being close

# Add energy cost to prevent erratic behavior
reward -= 0.01 * abs(action).sum()
```

## Step 5: Visualization

Render episodes and watch what the agent is actually doing:

```python
# Render every 100 episodes
if episode % 100 == 0:
    obs = env.reset()
    frames = []
    
    for step in range(500):
        frame = env.render(mode='rgb_array')
        frames.append(frame)
        
        action = policy.get_action(obs)
        obs, reward, done, info = env.step(action)
        
        if done:
            break
    
    # Save as video or GIF
    save_video(frames, f'episode_{episode}.mp4')
```

You'll often spot the problem immediately when you see what the agent is doing.

## Step 6: Hyperparameter Tuning

Only after everything above is working.

Start with known-good defaults from papers or implementations (like Stable-Baselines3). Change one thing at a time.

**Critical hyperparameters for PPO:**
- Learning rate: Start with 3e-4
- Clip range: 0.1 to 0.3
- Number of steps: 2048 to 4096
- Batch size: 64 to 256
- Entropy coefficient: 0.01 to 0.1

## Common Patterns I've Seen

**Pattern**: Reward increases then crashes  
**Cause**: Policy diverged too much (high KL)  
**Fix**: Lower learning rate or clip range

**Pattern**: Reward plateaus early  
**Cause**: Reward hacking or local optimum  
**Fix**: Redesign reward function, add exploration bonus

**Pattern**: High variance in rewards  
**Cause**: Environment is too random or reward too sparse  
**Fix**: Normalize observations, add reward shaping

**Pattern**: Works in sim, fails on robot  
**Cause**: Sim-to-real gap (dynamics, observations, or latency)  
**Fix**: Domain randomization, system ID, or train directly on robot

## Tools I Use

- **Weights & Biases**: Metric logging and visualization
- **Isaac Sim**: Robotics simulation
- **Stable-Baselines3**: Solid RL implementations
- **Custom logging**: CSV files for quick debugging

## Conclusion

RL debugging is hard because failures are often delayed and non-obvious. The key is to:

1. Verify your environment before training anything
2. Start with the simplest possible task
3. Monitor many metrics, not just reward
4. Watch what the agent actually does
5. Only tune hyperparameters after everything else works

Most RL bugs are actually environment bugs or reward function bugs, not algorithm bugs.

---

*Have questions or found this useful? Reach out on [GitHub](https://github.com/yourusername) or [email](mailto:your.email@example.com).*