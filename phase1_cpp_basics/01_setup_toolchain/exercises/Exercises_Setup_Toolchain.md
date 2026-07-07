# Exercises — Setup & Toolchain

Goal: leave this topic with a working, verified toolchain and comfort
compiling both single-file and multi-file programs from the terminal.
Solutions for the code-based exercises live in `solutions/`.

## Exercise 1 — Verify your compiler
**Task:** Confirm `g++` is installed and check its version. It should support
C++17 at minimum (GCC 8+ or Clang 5+).
```bash
g++ --version
```
Write the output as a comment at the top of `solutions/ex01_verify_compiler.cpp`
(no actual program logic needed — this one's just a checkpoint).

## Exercise 2 — Hello World, properly compiled
**Task:** Write a minimal "Hello, World!" program. Compile it manually with
warnings and the C++17 standard explicitly enabled:
```bash
g++ -std=c++17 -Wall -Wextra -o hello ex02_hello_world.cpp
./hello
```
Confirm it compiles with **zero warnings**.

## Exercise 3 — Trigger and read a compiler warning
**Task:** Deliberately write a program that produces a warning under
`-Wall -Wextra` (e.g. an unused variable, or a comparison between signed and
unsigned types). Compile it, read the warning message carefully, then fix the
code so it compiles clean. Keep both facts in a comment: what caused the
warning, and what fixed it.

## Exercise 4 — Compile a multi-file program manually
**Task:** Split a tiny program into `main.cpp` + `greet.h` + `greet.cpp`
(a single function like `greet(std::string name)` is enough). Compile it
*without* CMake, using separate compile + link steps:
```bash
g++ -std=c++17 -Wall -Wextra -c main.cpp -o main.o
g++ -std=c++17 -Wall -Wextra -c greet.cpp -o greet.o
g++ main.o greet.o -o greet_app
./greet_app
```
This is here so you understand what CMake automates for you later.

## Exercise 5 — Same program, built with CMake
**Task:** Take the multi-file program from Exercise 4 and write a minimal
`CMakeLists.txt` for it. Build it with:
```bash
mkdir build && cd build
cmake ..
make
./greet_app
```
Compare how much you had to type vs. Exercise 4.

## Exercise 6 — Editor/debugger sanity check
**Task:** Set a breakpoint in any of the above programs using `gdb` (or your
editor's debugger UI) and step through at least 3 lines. No code to submit —
just confirm in a comment in `solutions/ex06_notes.md` that it worked, and
note which tool/editor you used.

---
By the end of this topic you should be able to: compile a single file from
scratch with proper flags, compile a multi-file program both manually and via
CMake, and set a breakpoint. Everything after this assumes this workflow is
second nature.
