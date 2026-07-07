# 03 — Functions & Multi-File Programs

## LearnCpp Reference
[Chapter 2 — Functions and Files](https://www.learncpp.com/cpp-tutorial/introduction-to-functions/)

## Overview
This topic covers how to break a program into reusable functions, and how to
spread those functions across multiple files as a program grows. This is the
first topic where "compiling" and "linking" (from Topic 01) actually start to
matter in practice.

## Key Concepts
- **Function definition vs. declaration**: a *definition* has a body
  (`{ ... }`); a *declaration* (aka prototype) just announces a function's
  signature (`int add(int x, int y);`) so it can be called before it's
  defined, or from another file.
- **Parameters are passed by value by default**: the function gets a *copy*
  of the argument. Modifying a parameter inside the function does not affect
  the caller's variable (this changes once references show up in Topic 13).
- **Return type & `return`**: a function with a non-`void` return type must
  return a value on every code path. `void` functions return nothing and
  `return;` (no value) is optional at the end.
- **Forward declarations**: needed when you call a function before its
  definition appears (in the same file), or when calling a function defined
  in a different `.cpp` file — this is exactly what header files are for.
- **Header files & header guards**: a `.h` file holds declarations shared
  across files. `#ifndef X_H / #define X_H / #endif` (or `#pragma once`)
  prevents the same header from being processed twice in one translation
  unit, which would otherwise cause "redefinition" errors.
- **One Definition Rule (ODR)**: a function (or variable) must have exactly
  one *definition* across the whole program, but can be *declared* many
  times. This is why declarations go in headers and definitions go in `.cpp`
  files.

## Gotchas / Common Mistakes
- Forgetting a header guard — including the same header in two `.cpp` files
  compiles fine individually, but linking fails (or worse, the *same file*
  includes the header twice via a chain of other includes and fails to
  compile at all).
- Defining a function in a header file *without* `inline` — works fine for a
  header included once, but breaks the moment two `.cpp` files include it,
  because now the function is defined twice at link time.
- Not returning a value on every path of a non-void function — some
  compilers only warn, not error, and you get undefined behavior at runtime.
- Confusing "the function doesn't run" with "the function isn't declared" —
  a missing forward declaration is a *compile* error, not a silent skip.

## Useful Links
- [LearnCpp 2.1 — Introduction to functions](https://www.learncpp.com/cpp-tutorial/introduction-to-functions/)
- [LearnCpp 2.4 — Introduction to function parameters and arguments](https://www.learncpp.com/cpp-tutorial/introduction-to-function-parameters-and-arguments/)
- [LearnCpp 2.7 — Forward declarations and definitions](https://www.learncpp.com/cpp-tutorial/forward-declarations/)
- [LearnCpp 2.8 — Programs with multiple code files](https://www.learncpp.com/cpp-tutorial/programs-with-multiple-code-files/)
- [LearnCpp 2.11 — Header files](https://www.learncpp.com/cpp-tutorial/header-files/)
- [LearnCpp 2.12 — Header guards](https://www.learncpp.com/cpp-tutorial/header-guards/)

## Day Range
Day range: Day 3
