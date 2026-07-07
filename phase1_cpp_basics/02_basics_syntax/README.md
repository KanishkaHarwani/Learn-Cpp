# 02 — Basics & Syntax

## LearnCpp Reference
[Chapter 1 — C++ Basics](https://www.learncpp.com/cpp-tutorial/statements-and-the-structure-of-a-program/)

## Overview
This is where actual C++ syntax starts: statements, the structure of a
program, variables, and getting text in/out via `std::cin`/`std::cout`.
Everything here is foundational — you'll use it in literally every program
from now on.

## Key Concepts
- **Statements & blocks**: a program is a sequence of statements, grouped
  into blocks with `{ }`. Execution always starts at `main()`.
- **Variables**: a named piece of memory. Must be *defined* before use, and
  ideally *initialized* at the same time.
- **Initialization vs. assignment**: initialization happens once, at
  creation (`int x { 5 };`). Assignment (`x = 5;`) can happen any number of
  times after. Prefer brace-initialization (`{ }`) — it catches narrowing
  conversions the other syntaxes silently allow.
- **Uninitialized variables**: reading a variable before it's given a value
  is undefined behavior — it might work, might crash, might silently give
  garbage. Never rely on a variable's "default" value.
- **std::cout / std::cin**: `<<` sends data *to* the stream (output), `>>`
  extracts data *from* the stream (input, into a variable).
- **Comments**: `//` for line comments, `/* */` for block comments. Never
  nest block comments.

## Gotchas / Common Mistakes
- Declaring multiple variables on one line (`int a, b;`) — works, but hides
  bugs. Prefer one variable per line/statement.
- Forgetting to initialize a variable and being "lucky" that it happens to
  print `0` during testing — this is not guaranteed and will bite you later.
- Confusing `=` (assignment) with `==` (comparison) — this becomes especially
  dangerous once `if` statements show up (Topic 09), but the habit starts now.
- Using `std::endl` everywhere instead of `'\n'` — `endl` flushes the output
  buffer every time, which is slower. Prefer `'\n'` unless you specifically
  need the flush.

## Useful Links
- [LearnCpp 1.1 — Statements and the structure of a program](https://www.learncpp.com/cpp-tutorial/statements-and-the-structure-of-a-program/)
- [LearnCpp 1.3 — Introduction to objects and variables](https://www.learncpp.com/cpp-tutorial/introduction-to-objects-and-variables/)
- [LearnCpp 1.4 — Variable assignment and initialization](https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/)
- [LearnCpp 1.5 — Introduction to iostream: cout, cin, and endl](https://www.learncpp.com/cpp-tutorial/introduction-to-iostream-cout-cin-and-endl/)
- [LearnCpp 1.10 — Introduction to the preprocessor](https://www.learncpp.com/cpp-tutorial/introduction-to-the-preprocessor/)

## Day Range
Day range: Day 2
