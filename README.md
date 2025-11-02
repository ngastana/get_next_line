# 🧩 get_next_line

**get_next_line** teaches me how to read a file line by line —  
without losing your mind (or memory leaks 🧠💧).  

---

## 🧠 Project Overview

You’ll write a function:

```c
char *get_next_line(int fd);
```
that reads from a file descriptor one line at a time, including the newline (\n).
Each call to get_next_line(fd) returns the next line until the end of the file (EOF).
When there are no more lines, it returns NULL.

## 🧾 Example Usage
🧱 Example file: test.txt
Hello, readers!
¿Como andamos?
Venga, con dios
🧩 Output:
Hello, world!
¿Como andamos?
Venga, con dios

## ⚙️ Allowed Functions
You’re allowed to use:
read, malloc, free
That’s it. No lseek, no printf, no realloc, no getline.
Just you, your buffer, and your brain 🧩
## 💥 Error Handling
    ❌ If read() fails → return NULL
    🚫 If fd < 0 or BUFFER_SIZE <= 0 → return NULL
    🧹 Always free what you malloc (no leaks allowed)
    💡 Don’t forget to handle the end of file cleanly

## 🧩 How It Works (Simplified)
[ read() BUFFER_SIZE bytes ] → [ save leftovers in static variable ] → [ return one complete line ] → [ keep rest for next call ]

---
