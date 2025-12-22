---
layout: default
title: Home
---

<div class="hero">
  <div class="hero-content">
    <div class="hero-text">
      <h1 class="hero-name">Hemanth Karthikeya G</h1>
      <p class="hero-tagline">Data Scientist Intern at Hevo Data | CS Final Year Student</p>
    </div>
    <div class="hero-image">
      <img src="/assets/profile.jpg" alt="Your Name">
    </div>
  </div>
</div>

<section class="about">
  <h2>About</h2>
  <p>
    I work on RL-based control systems for autonomous vehicles, currently focusing on sim-to-real transfer using Isaac Sim. Previously built multi-agent systems for drone navigation. Interested in the intersection of classical control theory and modern deep learning.
  </p>
  <p>
    I write about robotics, reinforcement learning, and systems engineering — mostly technical deep-dives and architecture notes.
  </p>
</section>

<section class="now">
  <h2>Now</h2>
  <ul>
    <li>Training autonomous drone navigation using PPO in Isaac Sim</li>
    <li>Exploring sim-to-real transfer techniques for aerial robotics</li>
    <li>Writing about RL debugging strategies and Isaac Sim workflows</li>
  </ul>
  <p class="now-updated">Last updated: December 2024</p>
</section>

<section class="projects">
  <h2>Featured Projects</h2>
  
  <div class="project-list">
    <div class="project-item">
      <h3><a href="https://github.com/yourusername/project1">Drone RL Navigation</a></h3>
      <p>Autonomous quadcopter navigation using PPO in Isaac Sim — complete sim-to-real pipeline with domain randomization</p>
      <p class="project-tech">PyTorch • Isaac Sim • ROS2</p>
    </div>

    <div class="project-item">
      <h3><a href="https://github.com/yourusername/project2">Multi-Agent Coordination</a></h3>
      <p>Decentralized multi-agent path planning for drone swarms using MAPPO</p>
      <p class="project-tech">Python • Isaac Gym • Ray</p>
    </div>

    <div class="project-item">
      <h3><a href="https://github.com/yourusername/project3">Control Systems Toolkit</a></h3>
      <p>Collection of classical and modern control implementations — PID, MPC, and LQR with visualization tools</p>
      <p class="project-tech">Python • NumPy • Matplotlib</p>
    </div>
  </div>

  <p class="view-all"><a href="/projects">View all projects →</a></p>
</section>

<section class="blog-preview">
  <h2>Latest Posts</h2>
  
  <ul class="post-list">
    {% for post in site.posts limit:5 %}
    <li>
      <span class="post-date">{{ post.date | date: "%b %d, %Y" }}</span>
      <a href="{{ post.url }}">{{ post.title }}</a>
    </li>
    {% endfor %}
  </ul>

  <p class="view-all"><a href="/blog">View all posts →</a></p>
</section>

<section class="contact">
  <h2>Contact</h2>
  <p>
    <a href="https://github.com/HemanthK-12">GitHub</a> • 
    <a href="mailto:hemanthkarthikeya12@gmail.com">Email</a> • 
    <a href="/assets/DevResumeLatex.pdf">Resume</a>
  </p>
</section>