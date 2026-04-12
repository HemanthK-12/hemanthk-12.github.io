---
layout: page
title: Today I Learnt
permalink: /til/
---

<p class="tmyk-intro">small nitpicky things i learnt:  some from docs, some from random rabbit holes, some unfortunately from things breaking at 2am.</p>

<div class="tmyk-grid">
{% for card in site.til %}
  <div class="tmyk-card{% if card.wide %} wide{% endif %}" data-cat="{{ card.cat }}">
    <span class="card-tag">{{ card.cat }}</span>
    <h3 class="card-title">{{ card.title }}</h3>
    <div class="card-body">{{ card.content }}</div>
  </div>
{% endfor %}
</div>
