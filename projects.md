---
layout: page
title: Projects
permalink: /projects/
---

<div class="project-grid">

  <div class="project-card" data-domain="data">
    <span class="project-tag">data · mlops</span>
    <h3 class="project-title"><a href="https://github.com/HemanthK-12/ReportIQ">ReportIQ</a></h3>
    <p class="project-desc">power bi report-to-documentation generator that parses TMDL JSON to auto-generate ER diagrams and wiki pages in company-approved format. deployed on azure kubernetes service with CI/CD pipelines, serving 500+ concurrent users.</p>
    <div class="project-footer">
      <span class="project-tech">python · streamlit · azure · docker · kubernetes</span>
      <a class="project-link" href="https://github.com/HemanthK-12/ReportIQ">github →</a>
    </div>
  </div>

  <div class="project-card" data-domain="fullstack">
    <span class="project-tag">fullstack</span>
    <h3 class="project-title"><a href="https://github.com/HemanthK-12/make-my-mail">MakeMyMail</a></h3>
    <p class="project-desc">email management app with smart sorting, automated labeling, and mass unsubscribe. spring boot REST APIs backed by supabase postgres with &lt;200ms response time across 100+ concurrent sessions.</p>
    <div class="project-footer">
      <span class="project-tech">nextjs · spring boot · postgresql · docker</span>
      <a class="project-link" href="https://github.com/HemanthK-12/make-my-mail">github →</a>
    </div>
  </div>

  <div class="project-card" data-domain="ml">
    <span class="project-tag">ml · research</span>
    <h3 class="project-title"><a href="https://github.com/HemanthK-12/Cuffless_BP_Estimation_Diffusion_Model">Cuffless-BP</a></h3>
    <p class="project-desc">blood pressure prediction without a cuff — DDPM diffusion model for PPG-to-ECG generation combined with LSTM for ABP wave estimation. 2.68bpm error rate on MIMIC-IV, trained on an HPC cluster with WandB tracking.</p>
    <div class="project-footer">
      <span class="project-tech">pytorch · tensorflow · diffusion models · u-net</span>
      <a class="project-link" href="https://github.com/HemanthK-12/Cuffless_BP_Estimation_Diffusion_Model">github →</a>
    </div>
  </div>

  <div class="project-card" data-domain="fullstack">
    <span class="project-tag">fullstack · pwa</span>
    <h3 class="project-title"><a href="https://github.com/HemanthK-12/ARC-RoboKit">ARC-RoboKit</a></h3>
    <p class="project-desc">progressive web app for robotics club inventory management with role-based access, offline support, and push notifications. firebase SSO cut new member onboarding from days to minutes. 50+ daily active users.</p>
    <div class="project-footer">
      <span class="project-tech">svelte · sveltekit · tailwind · firebase</span>
      <a class="project-link" href="https://github.com/HemanthK-12/ARC-RoboKit">github →</a>
    </div>
  </div>

  <div class="project-card" data-domain="ml">
    <span class="project-tag">ml · nlp</span>
    <h3 class="project-title"><a href="https://github.com/HemanthK-12/SinhaVoice">SinhaVoice</a></h3>
    <p class="project-desc">sinhalese speech-to-text using a TDNN-F + LSTM hybrid architecture. 21.2% word error rate on only 224 hours of training data from the OpenSLR low-resource language dataset.</p>
    <div class="project-footer">
      <span class="project-tech">python · pytorch · kaldi · speech recognition</span>
      <a class="project-link" href="https://github.com/HemanthK-12/SinhaVoice">github →</a>
    </div>
  </div>

  <div class="project-card" data-domain="robotics">
    <span class="project-tag">robotics · rl</span>
    <h3 class="project-title"><a href="https://github.com/HemanthK-12/SinhaVoice">VO-Sim</a></h3>
    <p class="project-desc">vision-only drone navigation via PPO reinforcement learning in NVIDIA Isaac Sim 4.2. obstacle avoidance and waypoint navigation using only camera + IMU — no GPS or LIDAR.</p>
    <div class="project-footer">
      <span class="project-tech">python · isaac sim · skrl · px4 · openai gym</span>
      <a class="project-link" href="https://github.com/HemanthK-12/SinhaVoice">github →</a>
    </div>
  </div>

</div>
