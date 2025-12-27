---
layout: page
title: Experience
permalink: /experience/
---
A timeline of my professional and technical experience.
<div class="timeline">
<div class="timeline-item">
<div class="timeline-date-left">
<span class="date-month">MAY</span>
<span class="date-year">2024</span>
<span class="date-time">Present</span>
</div>
<div class="timeline-marker"></div>
<div class="timeline-content">
<h3>Data Scientist Intern — Hevo Data</h3>
<p>
        Yet to start.
</p>
</div>
</div>
<div class="timeline-item">
<div class="timeline-date-left">
<span class="date-month">JAN</span>
<span class="date-year">2024</span>
<span class="date-time">Apr 2024</span>
</div>
<div class="timeline-marker"></div>
<div class="timeline-content">
<h3>ML Intern — Providence</h3>
<p>Ideated, designed, developed and deployed an end-to-end internal product which converts Power BI reports into well-detailed documentation in company-approved format, which is being used presently by 500+ employees. Additionally developed RAG-based document QA tool from scratch supporting PDF, CSV, and Power BI files using vector embeddings, pgvector database for cosine similarity search, and LLM completion with source attribution.
</p>
</div>
</div>
<div class="timeline-item">
<div class="timeline-date-left">
<span class="date-month">AUG</span>
<span class="date-year">2021</span>
<span class="date-time">Present</span>
</div>
<div class="timeline-marker"></div>
<div class="timeline-content">
<h3>Summer Intern — Jio Platforms Ltd.</h3>
<p>
Gained proficiency in the bug life cycle and software development life cycle through manual testing of diverse engagements in JioEngage platform
</p>
</div>
</div>
</div>
<style>
.timeline {
position: relative;
margin: 3rem 0;
padding: 2rem 0;
max-width: 100%;
padding-left: 1rem;
}
.timeline::before {
content: '';
position: absolute;
left: 200px;
top: 0;
width: 3px;
height: 100%;
background: #555;
z-index: 0;
}
.timeline-item {
position: relative;
margin-bottom: 3rem;
display: grid;
grid-template-columns: 150px auto 1fr;
align-items: start;
gap: 1.5rem;
max-width: 1100px;
}
.timeline-date-left {
text-align: right;
padding-right: 1rem;
display: flex;
flex-direction: column;
align-items: flex-end;
padding-top: 0.8rem;
}
.date-month {
font-size: 0.8rem;
color: #bbb;
text-transform: uppercase;
letter-spacing: 1px;
}
.date-year {
font-size: 1.2rem;
color: #fff;
font-weight: bold;
margin: 0.2rem 0;
}
.date-time {
font-size: 0.75rem;
color: #888;
}
.timeline-marker {
position: relative;
z-index: 1;
width: 18px;
height: 18px;
background: #fff;
border-radius: 50%;
border: 4px solid #555;
box-shadow: 0 0 0 4px #181818;
flex-shrink: 0;
margin-left: 1.5px;
margin-top: 1.5rem;
}
.timeline-content {
background: #1a1a1a;
border: 1px solid #333;
border-radius: 6px;
padding: 1.3rem 1.8rem;
color: #e0e0e0;
box-shadow: 0 2px 8px rgba(0,0,0,0.3);
position: relative;
max-width: 700px;
}
.timeline-content::before {
content: '';
position: absolute;
left: -8px;
top: 18%;
transform: translateY(-50%);
width: 0;
height: 0;
border-top: 8px solid transparent;
border-bottom: 8px solid transparent;
border-right: 8px solid #333;
}
.timeline-content h3 {
margin-top: 0;
margin-bottom: 0.7rem;
font-size: 1.1rem;
color: #fff;
font-weight: 600;
}
.timeline-content p {
margin-bottom: 0;
color: #bbb;
line-height: 1.6;
font-size: 0.92rem;
}
@media (max-width: 768px) {
.timeline {
padding-left: 1rem;
  }
.timeline::before {
left: 30px;
  }
.timeline-item {
grid-template-columns: auto 1fr;
gap: 1rem;
  }
.timeline-date-left {
display: none;
  }
.timeline-marker {
margin-left: 21px;
margin-top: 1rem;
  }
.timeline-content {
margin-left: 1rem;
max-width: 100%;
  }
.timeline-content::before {
display: none;
  }
}
</style>