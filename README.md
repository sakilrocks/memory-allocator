# Custom Memory Allocator in C 

**A custom dynamic memory allocator that mimics the behavior of `malloc` and `free`.**

---

## Overview
This project demonstrates low-level memory management in C.  
It implements a simple **free-list based memory allocator** to allocate and free memory blocks manually without using the standard `malloc` and `free`.  

It’s designed for learning how heap memory works and how dynamic memory allocation is implemented under the hood.

---

## Project Structure

```
memory-allocator/
├─ src/
│  ├─ allocator.c     # implementation of my_malloc & my_free
│  └─ test.c          # test program demonstrating allocator
├─ include/
│  └─ allocator.h     # function declarations
├─ Makefile           # build instructions
└─ README.md

```
---

## Features
	•	my_malloc(size_t size) — allocate memory blocks
	•	my_free(void* ptr) — free previously allocated blocks
	•	Tracks allocated and free memory using a free-list
	•	Lightweight, modular, and educational

 ---


## Learning Goals
	•	Understand heap memory and dynamic memory allocation
	•	Learn pointer arithmetic and memory block layout
	•	Implement and manage a linked list for free memory blocks
	•	Explore how malloc and free work internally

---

## Tech Used
	•	Language: C (C99)
	•	Platform: Linux / macOS (POSIX)

 ---

 ## License
This project is licensed under the MIT License — feel free to use and modify for learning purposes.
