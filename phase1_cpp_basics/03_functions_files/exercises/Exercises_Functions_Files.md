# Exercises — Functions & Multi-File Programs

Goal: get comfortable writing functions with parameters/return values, and
splitting code across files correctly using declarations and header guards.
Solutions in `solutions/`.

## Exercise 1 — Basic function with return value
**Task:** Write a function `int add(int x, int y)` that returns the sum of
its arguments. Call it from `main()` with a few different values and print
the results.

## Exercise 2 — Void function (side effect only)
**Task:** Write a `void` function `printDivider()` that prints a line of
dashes. Call it a few times from `main()` to separate sections of output.

## Exercise 3 — Forward declaration
**Task:** In a single file, write `main()` so it calls a function
`square(int)` *before* that function is defined further down in the same
file. Add the necessary forward declaration so it compiles. Comment on what
error you'd get without it.

## Exercise 4 — Split into header + source + main
**Task:** Take Exercise 1's `add` function and move it into its own
`mathutils.h` / `mathutils.cpp` pair, with a proper header guard. `main.cpp`
should `#include "mathutils.h"` and call `add()`. Build it with g++
(manually or via a small script) and confirm it links correctly.

## Exercise 5 — Missing header guard (observe, then fix)
**Task:** Temporarily remove the header guard from `mathutils.h`, then
`#include "mathutils.h"` twice in the same `.cpp` file (directly, not via
another header). Compile it and note the exact error. Restore the guard and
confirm it compiles clean again. Write both outcomes as comments.

## Exercise 6 — Return on every path
**Task:** Write a function `std::string sizeCategory(int value)` that
returns `"small"` for values under 10, `"medium"` for 10-99, and `"large"`
for 100+. Make sure every path returns a value — no falling off the end of
the function.

---
By the end of this topic you should default to putting shared function
declarations in headers with guards, keep definitions in `.cpp` files, and
never leave a non-void function without a guaranteed return value.
