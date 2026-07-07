# Exercises — Basics & Syntax

Goal: get comfortable declaring/initializing variables correctly and moving
data in and out via `std::cin`/`std::cout`. Solutions in `solutions/`.

## Exercise 1 — Initialization forms
**Task:** Declare three `int` variables named the same value (e.g. `5`) using
three different initialization styles: copy-init (`int a = 5;`), direct-init
(`int b(5);`), and brace-init (`int c{5};`). Print all three. Add a comment
explaining which one you should prefer going forward and why.

## Exercise 2 — Catch a narrowing conversion
**Task:** Try to brace-initialize an `int` from a `double` that has a
fractional part (e.g. `int x { 4.7 };`). Note what the compiler does (it
should refuse to compile). Then show the same mistake using copy-init
(`int x = 4.7;`) and note that it silently compiles and truncates. Comment on
why brace-init is safer.

## Exercise 3 — Uninitialized variable (observe, then fix)
**Task:** Declare an `int` without initializing it and print its value.
Run it a couple of times / note the value looks like garbage (or is
suspiciously `0` — either way, explain in a comment why you can't rely on
it). Then fix the program by properly initializing the variable.

## Exercise 4 — Basic input/output round-trip
**Task:** Write a program that asks the user for their name and age via
`std::cin`, then prints a sentence using both back via `std::cout`
(e.g. "Hi Alex, in 10 years you'll be 35."). Use `'\n'` rather than
`std::endl`.

## Exercise 5 — Comments as documentation
**Task:** Take Exercise 4's program and add: a block comment at the top
explaining what the program does, and at least one line comment explaining
a non-obvious line (even if it feels obvious now — practice the habit).

---
By the end of this topic you should default to brace-initialization, never
leave a variable uninitialized, and be comfortable with a basic
input → process → output flow.
