---
layout: post
title: "Interesting Things/Updates I found out"
date: 2024-12-26
tags: [Tailscale, homelab, selfhosting]
permalink: /posts/2025-12-26-update-and-things-i-found-out/
---

Some interesting developments on things I'm interested in : 

## Found out Nginx and Caddy are the same 
I have used caddy to help me in hosting vaultwarden password manager in my home server(you can check out the blog [here](/posts/2025-12-22-vaultwarden-setup-selfhosting)) because vaultwarden apparently accepts https only. Meanwhile, I was also seeing posts about https and cert generation mentioning nginx, and then found out Caddy and nginx are the same, just in diff setups, viz. one in small homelabs/monolithic sstems and the latter being used in production env and enterprises. The more you know.

## Tailscale finally adding subdomain cert generation
Tailscale has rolled out a beta which introduced a new feature called **Tailscale Services**, which FINALLY allows us to generate certificates for subdomains of our self hosted services and also need https for them. Generally we need to use a third party service like nginx or caddy to generate certificates using Let's Encrypt for https compatibility for our services and it was COMPULSORY for us own a domain to direct these certs. But Tailscale has the feature of generating cert for the tailnet `<name>.ts.net` BUT FRUSTRATINGLY, only 1 service can use it. Now, we can generate multiple certs, one for each subdomain of our tailnet, eg. `immich.<name>.ts.net`. Good to hear :D

## Using a Data Structure in the Wild..!
I had the opportunity of using a data structure I've known since a long time, the **HASHMAP**, for an actually useful work instead of just in leetcode/interviews. 

I had a project in mind to sort through all the contacts in my phone, which include the union of contacts in my google accounts(yes, multiple), my sim and my device. For context I have an android phone running Android 16 and in the default contacts app, there is NO way to show duplicates of contacts, atleast not reliably. I don't know what the reason is, but my bet is on the difference that numbers stored in google, in my sim and on device store numbers in different formats, namely `xxx-xxx-xxxx`, `xxx xxx xxxx` and `xxxxxxxxxx`. Contacts app was only showing me duplicates in the first format, but not the others and I needed to clean around 2000 contacts. 

So, I exported the contacts in `.vcf` format, sent it to my laptop and opened it in vscode to see the contents. I noticed that it was just a text file with this format for each contact :
```text
BEGIN:VCARD
VERSION:2.1
N:;Lorem Ipsum;;;
FN:Lorem Ipsum
TEL;CELL:+91[redacted]
PHOTO;ENCODING=BASE64;JPEG:/9j/4AAQSkZJRgABAQAAAQABAAD/4gHYSUNDX1BST0ZJTEU
 AAQEAAAHIAAAAAAQwAABtbnRyUkdCIFhZWiAH4AABAAEAAAAAAABhY3NwAAAAAAAAAAAAAAAA
 AAAAAAAAAAAAAAAAAAAAAQAA9tYAAQAAAADTLQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
 AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAlkZXNjAAAA8AAAACRyWFlaAAABFAAAABRnWFlaAA
 ABKAAAABRiWFlaAAABPAAAABR3dHB0AAABUAAAABRyVFJDAAABZAAAAChnVFJDAAABZAAAACh
 iVFJDAAABZAAAAChjcHJ0AAABjAAAADxtbHVjAAAAAAAAAAEAAAAMZW5VUwAAAAgAAAAcAHMA
 UgBHAEJYWVogAAAAAAAAb6IAADj1AAADkFhZWiAAAAAAAABimQAAt4UAABjaWFlaIAAAAAAAA
 CSgAAAPhAAAts9YWVogAAAAAAAA9tYAAQAAAADTLXBhcmEAAAAAAAQAAAACZmYAAPKnAAANWQ
 AAE9AAAApbAAAAAAAAAABtbHVjAAAAAAAAAAEAAAAMZW5VUwAAACAAAAAcAEcAbwBvAGcAbAB
 lACAASQBuAGMALgAgADIAMAAxADb/2wBDAAIBAQEBAQIBAQECAgICAgQDAgICAgUEBAMEBgUG
 BgYFBgYGBwkIBgcJBwYGCAsICQoKCgoKBggLDAsKDAkKCgr/2wBDAQICAgICAgUDAwUKBwYHC
 goKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgr/wAARCA
 BgAGADASIAAhEBAxEB/8QAHgAAAQQDAQEBAAAAAAAAAAAABwADCAkEBQYKAgH/xABLEAAABAQ
 DAwYICgcIAwAAAAABAgMEBQYHEQAIEhMUIQkVIjFBUSMyNUJhYnSyFiQzNENSU3FzkQolcoGS
 sdEXGCZEV4KhwWOltf/EABsBAAEFAQEAAAAAAAAAAAAAAAYAAQQFBwMC/8QANBEAAQMCBAMHA
 QcFAAAAAAAAAQIDEQAEBRIhMUFRcQYTMmGBkaEUIlKxwdHw8SMzQnLh/9oADAMBAAIRAxEAPw
 C/OEeS2vsyfu4ycMsi/E0b/Zl93D2GGtKlhYG1bM2WXnLuzTdVlqrCoICp9Kaa6+pQf9hQEf8
 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
 ol0P/Vt8FOL+S3Xsynu4H1eI0Lr8Zr//2Q==

END:VCARD
```
So I wrote a c++ script which extracts the name and the phone number with regex and normalises the phone number to only 10 digits. Then, to find duplicates I made a hashmap with the phone number as the key and the name as the value(made it a vector), and printed all phone numbers with >1 name. Worked like a charm !
You can find my (very sloppy) c++ script [here](/assets/s.cpp).






Catch you guys in the next one. 