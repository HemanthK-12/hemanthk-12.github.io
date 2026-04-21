---
layout: post
title: "the story of the homeserver"
date: 2026-04-21
tags: [Tailscale, homelab, selfhosting]
permalink: /posts/2026-04-21-server-story/
---

Making a server is very straightforward and requires no highend hardware and is completely free(excluding negligible electricty costs). For example, the initial draft of my server worked on an i3-2nd gen cpu with 4GB ram (ddr3, ouch), and it still worked great. only with some small storage and ram modifications, I am still maining the same system.
![Glances screenshot](/assets/letter-h.png)

## How this journey started

My first exposure to diving into tech came from me learning about ubuntu and linux in the 1st year of my undergrad through the labs and also the robotics club I was a part of. As time went on, I tried various distributions, viz. ubuntu->zorin->endeavour->kali->omarchy->debian and finally on bazzite for the last 3 months. I think it was this which made me dive deeper into the privacy rabbit hole: looking at VPNs, learnign about `nmap`, dabbling with Kali linux, RSS feeds, open source alternatives to services i use, reading privacy policies, monitoring data breaches, encrypting passwords, finding out about Yubikey, and many more. Hands down, the best outcome which came from this slowly rising paranoia in me was getting introduced to the world of self hosting.

Self hosting became the perfect middle ground for me. I was concerned enough to realise the extent of survelliance and control companies like the big G, zuckerbook and microslop (and even govts with the new age verification bs) have on **our** personal machines. But, I wanted it without causing a major hit to speed or convenience as does anyone. Naturally, Tor, dark web, hosting my mail server, multiple VPN tunnels wasn't practical for me. Self hosting made me aware of the fact that if the data being transmitted is sent to my own machine, inacessible to the outside world without my explicit permission, I'm fine with it.

## My Services

As of now, these are the service I host in my server : 

| Affine | Notion Equivalent |
| VaultWarden | Password Manager[Self hosted rust reimplementation of open-source Bitwarden] |
| Dozzle | Docker containers monitoring tool | 
| Glances | Homepage to monitor all metrics of my server |
| Karakeep | Bookmarking + Temporary note-taking app | 
| SearXNG | Metasearch engine, replacing google with fallback on brave search |
| Forgejo | self hosted git instance |
| Navidrome | spotify equivalent's backend + symfonium as frontend client |
| Immich | Google photos alternative | 
| Filebrowser quantum | google drive alternative | 
| Media Server | Netflix alternative |
|   - Prowlarr | Torrents and Indexers finder | 
|   - Radarr | Movie management | 
|   - Sonarr | TV Shows management | 
|   - Bazarr | Subtitles management | 
|   - Qbittorrent | Downloading client | 
|   - Jellyfin | Streaming client | 
|   - Fladder | Material You based frontend client, crossplatform, supporting windows, mac, linux, android, ios | 

If it's your first time, I recommend starting with a password manager and a google drive equivalent as you'll face all the common problems in self hosting. But first, you need a machine.

## The Server

My father had an old office cpu, i3-2120 4GB ddr3 ram and that was enough for me to run everything except media streaming(for this, I upgraded ram by adding another 89gb ddr3 stick totalling to 12 gigs, costed ~Rs.2000). Any old laptop/cpu would be perfect, just make sure it gets plenty of ventilation.

