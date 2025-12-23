```
yourusername.github.io/
├── _config.yml           # Jekyll configuration
├── index.md              # Homepage
├── projects.md           # Projects page
├── now.md                # Now page
├── _blog/               # Blog posts (markdown)
│   └── YYYY-MM-DD-title.md
├── _layouts/
│   ├── default.html      # Base template
│   ├── post.html         # Blog post template
│   └── page.html         # Static page template
├── assets/
│   ├── css/
│   │   └── style.css     # Custom dark theme
│   └── images/
└── resume.pdf
```
# Developer Portfolio Guidelines

## Design Philosophy

**Core Principle**: Minimal, dark, text-first — like reading well-written documentation.

### Visual Rules (Non-Negotiable)

| Element | Rule |
|---------|------|
| Background | Dark (`#1a1a1a` or `#0d1117`) |
| Text | High contrast (`#e6e6e6` or `#c9d1d9`) |
| Animations | ❌ None |
| Gradients | ❌ None |
| Shadows | ❌ None |
| Icons | ❌ Minimal/None |
| Font | ONE family only (system/JetBrains Mono/Inter) |
| Max Width | 720-800px (centered) |
| Line Height | 1.6-1.7 |

### What This Portfolio Is NOT

- ❌ Marketing page
- ❌ Dashboard with widgets
- ❌ Animated showcase
- ❌ Card-heavy layout
- ❌ Social media hub

### What This Portfolio IS

- ✅ Technical writing portfolio
- ✅ Project documentation hub
- ✅ Serious engineering presence
- ✅ Long-term stable design
- ✅ README.md aesthetic

---

## Content Requirements

### Essential Sections

1. **Hero**
   - Name (large, centered or left)
   - 1-line tagline (10 words max)
   - 3-4 line bio

2. **Now** (Highly Important)
   - Current work (2-3 bullets)
   - Active learning
   - Shows momentum

3. **Projects** (3-5 only)
   - Name + 1-line description
   - Tech stack
   - GitHub link
   - Optional: blog link

4. **Blog**
   - Latest 3-5 posts
   - Title + date
   - Link to full archive

5. **Contact**
   - Email (plain text)
   - GitHub
   - Resume (PDF)
   - Optional: RSS feed

### Blog Post Structure

```
Title
Date · Reading time

Content with:
- Proper heading hierarchy (h2, h3)
- Code blocks with syntax highlighting
- Lists where appropriate
- No fluff
```

---

## Technical Stack

### Jekyll Setup

**Why Jekyll?**
- Native GitHub Pages support
- Markdown → HTML
- Built-in syntax highlighting
- Zero-cost hosting

**Theme**: `minima` (barebones) + custom CSS

**File Structure**
```
yourusername.github.io/
├── _config.yml
├── index.md
├── projects.md
├── now.md
├── _blog/
│   └── YYYY-MM-DD-title.md
├── _layouts/
├── assets/css/style.css
└── resume.pdf
```

### Local Development Workflow

```bash
# Install Jekyll
gem install jekyll bundler

# Run local server
bundle exec jekyll serve

# Preview at
http://localhost:4000
```

**Benefits**:
- See changes instantly
- No commit/push needed
- Exact GitHub Pages preview

---

## Typography Rules

### Font Sizes

- **Title/Name**: 2-2.5rem
- **Section Headers**: 1.3-1.5rem
- **Body Text**: 1rem
- **Metadata**: 0.9rem

### Font Choice (Pick ONE)

**Option 1: System Fonts** (Recommended)
```css
font-family: system-ui, -apple-system, BlinkMacSystemFont, 
             "Segoe UI", Roboto, Ubuntu, Cantarell;
```

**Option 2: Developer Aesthetic**
```css
font-family: "JetBrains Mono", monospace;
```

**Option 3: Modern Clean**
```css
font-family: "Inter", system-ui, sans-serif;
```

---

## Color Scheme

### Dark Theme (Recommended)

```css
--bg-primary: #1a1a1a;
--bg-secondary: #0d1117;
--text-primary: #e6e6e6;
--text-secondary: #8b949e;
--border: #30363d;
--accent: #58a6ff; /* Optional, use sparingly */
```

### Light Theme Alternative

```css
--bg-primary: #ffffff;
--text-primary: #111111;
--border: #e1e4e8;
```

---

## Content Writing Guidelines

### Project Descriptions

**Bad**: "A cool app that does stuff with ML"

**Good**: "Autonomous drone navigation using PPO in Isaac Sim — sim-to-real transfer pipeline"

**Format**:
```
[Name] — [What it does] using [Tech] ([Optional context])
```

### Blog Post Guidelines

**Minimum**:
- 1 deep technical post
- 1 architecture/design post
- 1 learning reflection

**Style**:
- Code-heavy is good
- Show, don't tell
- Include errors/failures
- No marketing speak

### Bio Guidelines

**Bad**: "Passionate developer who loves coding"

**Good**: "Robotics engineer working on RL-based control systems. Currently exploring sim-to-real transfer for aerial vehicles."

**Rules**:
- Be specific
- Show current focus
- No buzzwords
- 3-4 lines max

---

## Featured Posts Section

### Styling (From Image)

```
┌─────────────────────────────────┐
│  Featured Posts                 │
│                                 │
│  ┌───────┐ ┌───────┐ ┌───────┐ │
│  │ Post  │ │ Post  │ │ Post  │ │
│  │ Title │ │ Title │ │ Title │ │
│  └───────┘ └───────┘ └───────┘ │
└─────────────────────────────────┘
```

**Rules**:
- Thin border only (1px, subtle color)
- No shadow
- No hover animations
- Equal spacing
- 3 posts max on homepage

---

## Navigation

### Keep It Simple

**Good**: `Home | Projects | Blog | Now | Contact`

**Bad**: Dropdowns, hamburgers, mega-menus

**Style**:
- Top of page
- Horizontal layout
- Plain text links
- Current page indication (subtle)

---

## Deployment

### GitHub Pages Setup

1. Create repo: `yourusername.github.io`
2. Push Jekyll site
3. Enable GitHub Pages in settings
4. Live in 1-2 minutes

**URL**: `https://yourusername.github.io`

**Custom Domain** (Optional):
- Add CNAME file
- Configure DNS
- Keep it simple

---

## Anti-Patterns (AVOID)

### Don't Include

- ❌ Skill percentage bars
- ❌ "Technologies I know" grids with 50 logos
- ❌ Testimonials section
- ❌ Contact forms (just use email)
- ❌ "About Me" with life story
- ❌ Social media follower counts
- ❌ Auto-playing anything
- ❌ Pop-ups or modals
- ❌ "Download my app" CTAs

### Why These Are Bad

They signal: "I'm trying too hard to impress"

Your work should speak for itself.

---

## Quality Checklist

Before launching:

**Content**
- [ ] Bio is specific, not generic
- [ ] 3-5 strong projects (not 15 weak ones)
- [ ] At least 2 blog posts published
- [ ] Now section is current
- [ ] Email works, resume is updated

**Design**
- [ ] Dark theme is consistent
- [ ] Typography is readable (test on phone)
- [ ] No broken links
- [ ] Code blocks have syntax highlighting
- [ ] Site loads in <1 second

**Technical**
- [ ] Works on mobile
- [ ] No console errors
- [ ] RSS feed works (if included)
- [ ] Local preview matches GitHub Pages

---

## Success Metrics

This portfolio succeeds if:

✅ A recruiter can understand what you do in 30 seconds  
✅ A fellow engineer respects your technical depth  
✅ Your blog posts are shareable/useful  
✅ The site still looks good in 5 years  
✅ You're proud to share the link

**This is not about**:
- Traffic numbers
- SEO rankings
- Conversion rates
- Social shares

**This is about**:
- Credibility
- Clarity
- Craft

---

## Maintenance Philosophy

### Update When

- ✅ Finish a significant project
- ✅ Publish a new blog post
- ✅ Change roles/focus (Now section)
- ✅ Update resume

### Don't Update

- ❌ Every week for minor tweaks
- ❌ To follow design trends
- ❌ Because someone told you to add animations
- ❌ To make it "prettier"

**Stability is a feature, not a bug.**

---

## Final Principle

> "A portfolio should age like good documentation — clear, useful, timeless."

This isn't your social media profile.  
This isn't a startup landing page.  
This is your professional technical presence.

Keep it minimal. Keep it real. Keep it readable.