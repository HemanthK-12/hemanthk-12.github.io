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
    I am working on upkilling, majorly in the field of Database Management systems, SQL query optimizations and ETL pipelines and their optimizations. Previously have experience in RAG-based tool generationg with ER diagram support and prompt engineering at my previous internship in Providence.
  </p>
  <p>
    I write about interesting things I find about tech and languages in my work/out in the wild, mostly technical deep-dives or about my home server and the setup I've gone through.
  </p>
</section>

<section class="now">
  <h2>Now</h2>
  <ul>
    <li>Developing MakeMyMail, mass emails management platform for myself.</li>
    <li>Upskilling and going deep into CS fundamentals, in Full Stack, Data science and DevOps.</li>
    <li>Organizing stuff and self hosting whatever I can.</li>
  </ul>
  <p class="now-updated">Last updated: December 2025</p>
</section>

<section class="projects">
  <h2>Featured Projects</h2>
  
  <div class="project-list">
    <div class="project-item">
      <h3><a href="https://github.com/HemanthK-12/make-my-mail">MakeMyMail</a></h3>
      <p>A system to manage emails efficiently. </p>
      <p class="project-tech">SpringBoot, PostgreSQL, Supabase and NextJS</p>
    </div>
    <div class="project-item">
      <h3><a href="https://github.com/yourusername/project2">Cuffless BP-Prediction System</a></h3>
      <p>Cuffless BP prediction system using RDDM diffusion model for PPG-to-ECG generation and LSTM for ABP wave prediction</p>
      <p class="project-tech">Python</p>
    </div>
    <div class="project-item">
      <h3><a href="https://github.com/yourusername/project3">ReportIQ - Wiki Generator</a></h3>
      <p>Power BI report-to-documentation generator using Streamlit that parses JSON TMDL files to auto-generate ER diagrams and detailed wiki pages</p>
      <p class="project-tech">Python, Streamlit</p>
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
    <a href="https://github.com/HemanthK-12">GitHub</a><br>
    <a href="mailto:hemanthkarthikeya12@gmail.com">Email</a><br>  
    <a href="/assets/DevResumeLatex.pdf">Resume</a>
  </p>
</section>