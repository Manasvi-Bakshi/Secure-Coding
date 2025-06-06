# 🔐 Secure Coding

Hey there! 👋  
This project is a hands-on dive into common security vulnerabilities—how they work, and more importantly, how to think like an attacker to build safer code. As part of my secure coding lab work, I implemented and replicated real-world attacks to understand their mechanics deeply.

## Goal

The goal of this lab was to **learn by breaking**—to better defend code by first understanding how it can be exploited. Each section demonstrates a known vulnerability or attack vector, recreated in a controlled environment.

## What’s Inside

Here’s a quick look at what I explored and implemented:

1. **Affine Cipher Attacks**
   - Cracked messages encrypted with the affine cipher using:
     - Frequency Analysis
     - Brute Force

2. **Buffer Overflow**
   - Demonstrated how poor memory handling leads to executable overflows.

3. **Format String Vulnerability**
   - Exploited unsanitized input to leak memory and alter flow.

4. **Return-to-libc Attack**
   - Bypassed non-executable stacks by chaining libc calls—classic technique!

5. **Race Condition**
   - Simulated concurrent file access issues to exploit timing gaps.

6. **SQL Injection**
   - Injected malicious input to bypass authentication and extract data.


