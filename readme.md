# HexColor - Hexadecimal File Dumper (WIP)

A lightweight C utility designed to read files in **binary mode** and output their contents as hexadecimal values. This project is currently a **Work In Progress**.  

---

## 🚀 Current Status: Phase 1 Complete
- [x] Open files in binary mode (`rb`)  
- [x] Error handling for missing files  
- [x] Byte-by-byte stream reading using `fgetc`  
- [x] Hexadecimal conversion and console output  

---

## 🛠️ Upcoming Features (WIP)
- [ ] Formatted Output: Implementing 16-byte rows with memory offsets  
- [ ] ASCII Sidebar: Displaying printable characters alongside hex codes  
- [ ] CLI Arguments: Allowing users to specify the filename via the command line (e.g., `.\hexdump image.png`)  

---

## 💻 How to Run
To compile the current version using GCC:

```bash
gcc main.c -o myhexdump