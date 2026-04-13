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

<section class="til-preview">
  <h2>til</h2>

  <div id="til-pool" hidden>
    {% for card in site.til %}
    <div class="tmyk-card" data-cat="{{ card.cat }}">
      <h3 class="card-title">{{ card.title }}</h3>
      <div class="card-body">{{ card.content }}</div>
    </div>
    {% endfor %}
  </div>

  <div id="til-sample" class="tmyk-grid til-preview-grid"></div>

  <p class="view-all"><a href="/til">View all →</a></p>
</section>

<script>
(function () {
  var pool = Array.from(document.getElementById('til-pool').children);
  for (var i = pool.length - 1; i > 0; i--) {
    var j = Math.floor(Math.random() * (i + 1));
    var tmp = pool[i]; pool[i] = pool[j]; pool[j] = tmp;
  }
  var sample = document.getElementById('til-sample');
  pool.slice(0, 2).forEach(function (card) {
    sample.appendChild(card.cloneNode(true));
  });
})();
</script>

<section class="contact">
  <h2>Contact</h2>
  <p>
    <a href="https://github.com/HemanthK-12">GitHub</a><br>
    <a href="mailto:hemanthkarthikeya12@gmail.com">Email</a><br>  
    <a href="/assets/DevResumeLatex.pdf">Resume</a><br>
    <a href="https://youtube.com/@thought_train">Youtube</a>
  </p>
</section>