Buffer Overflow Exploitation Demo
=================================
This repository contains a buffer overflow exploitation demo targeting the Windows XP Service Pack 2 environment. It consists of an exploitation program (tsunami.c) and a vulnerable program (vuln.c), both designed for educational purposes.

Prerequisites
Windows XP Service Pack 2 environment (A virtual machine should do the trick).
Visual Studio or the Microsoft Visual C++ Compiler (cl) installed.

Usage:

Compile the vulnerable program:
cl vuln.c -o vuln

Compile the exploitation program:
cl tsunami.c -o tsunami

Execute the exploitation program:
tsunami.exe

Observe the behavior of the vulnerable program.

Disclaimer
This code is for educational purposes only, demonstrating buffer overflow vulnerabilities and shellcode injection. Use responsibly and only in controlled environments.