---
layout: default
title: Home
---

<div class="hero">
  <div class="hero-content">
    <div class="hero-text">
      <h1 class="hero-name" id="hero-name">Hemanth Karthikeya G</h1>
      <p class="hero-tagline">SDE Intern at Hevo Data </p>
      <p class="hero-tagline"> CS Final Year Student </p>
    </div>
    <div class="hero-image">
      <img src="/assets/profile.jpg" alt="Your Name">
    </div>
  </div>
</div>

<!-- <section class="now">
  <h2>Now</h2>
  <ul>
    <li>Developing MakeMyMail, mass emails management platform for myself.</li>
    <li>Upskilling and going deep into CS fundamentals, in Full Stack, Data science and DevOps.</li>
    <li>Organizing stuff and self hosting whatever I can.</li>
  </ul>
  <p class="now-updated">Last updated: December 2025</p>
</section> -->

<section class="blog-preview">
  <h2>posts</h2>
  
  <ul class="post-list">
    {% for post in site.posts limit:2 %}
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
    <a href="/assets/DevResumeLatex.pdf">Resume</a><br>
    <a href="https://youtube.com/@thought_train">Youtube</a>
  </p>
</section>