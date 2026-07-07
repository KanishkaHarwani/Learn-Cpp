# 01 — Setup & Toolchain

## LearnCpp Reference
[Chapter 0 — Introduction / Getting Started](https://www.learncpp.com/cpp-tutorial/introduction-to-these-tutorials/)

## Overview
Before writing any real C++, you need a working toolchain: a compiler, a way to
build multi-file projects, and a way to catch mistakes early. This topic is
less about C++ syntax and more about the workflow you'll use for the rest of
the repo — compile, run, iterate.

On Linux, the toolchain is:
- **g++** (or clang++) — the compiler
- **CMake** — build system generator, used for anything beyond a single file
- **gdb** — debugger (covered properly in Topic 04, but installed here)

## Key Concepts
- **Compiling vs. linking**: the compiler turns `.cpp` into object files (`.o`);
  the linker combines object files (+ libraries) into an executable. Most
  "undefined reference" errors are linker errors, not compiler errors.
- **Compiler flags matter**: `-Wall -Wextra` turn on warnings that catch real
  bugs (uninitialized variables, sign mismatches, etc.) — turn these on from
  day one, not after your first crash.
- **C++ standard flag**: `-std=c++17` (or `c++20`) tells the compiler which
  language version to use. Without it you may silently get an older standard.
- **CMake vs. raw g++**: raw `g++` is fine for single-file exercises. CMake
  becomes worth it the moment you have more than one `.cpp` file or want
  reproducible builds — this is why mini-projects use it, but individual
  exercises don't need to.

## Gotchas / Common Mistakes
- Forgetting `-std=c++17` and being confused why a modern feature "doesn't
  work" — it's silently falling back to an older standard.
- Ignoring warnings. `-Wall -Wextra` is not decoration; read every warning
  before you run the program.
- Mixing tabs/spaces or line-ending styles across editors — set your editor
  to spaces (4-space indent is the LearnCpp convention) from the start.
- Not checking the compiler's exit code / actually reading the *first* error
  in a wall of error text — later errors are often just noise cascading from
  the first one.

## Useful Links
- [LearnCpp Ch 0.6 — Installing an IDE](https://www.learncpp.com/cpp-tutorial/installing-an-integrated-development-environment-ide/)
- [LearnCpp Ch 0.7 — Compiling your first program](https://www.learncpp.com/cpp-tutorial/compiling-your-first-program/)
- [CMake official tutorial](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)
- [cppreference — compiler support table](https://en.cppreference.com/w/cpp/compiler_support)

## Day Range
Day range: Day 1
