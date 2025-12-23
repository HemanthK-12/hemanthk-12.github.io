---
layout: page
title: Blog
permalink: /blog/
---

A collection of technical posts on reinforcement learning, robotics, and control systems.

---

<div class="blog-list">
  {% for post in site.posts %}
  <div class="blog-card">
    <h3 class="blog-title">
      <a href="{{ post.url }}">{{ post.title }}</a>
    </h3>
    <div class="blog-meta">
      <span class="blog-date">{{ post.date | date: "%b %d, %Y" }}</span>
      {% assign words = post.content | number_of_words %}
      {% assign reading_time = words | divided_by: 200 %}
      {% if reading_time < 1 %}
        {% assign reading_time = 1 %}
      {% endif %}
      <span class="blog-reading-time">{{ reading_time }} min read</span>
    </div>
    <p class="blog-excerpt">
      {{ post.content | strip_html | truncatewords: 32, "..." }}
    </p>
  </div>
  {% endfor %}
</div>
