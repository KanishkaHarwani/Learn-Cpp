# Exercise 5 — Missing header guard (observe, then fix)

## Setup
`mathutils_noguard.h` (in this folder) is a deliberately broken copy of
`ex04_split_files/mathutils.h` with the `#ifndef/#define/#endif` guard
removed, containing a **function definition** (not just a declaration) so
the redefinition problem shows up within a single translation unit.

`ex05_trigger_error.cpp` includes it twice directly.

## Command
```bash
g++ -std=c++17 -Wall -Wextra -c ex05_trigger_error.cpp -o /tmp/out.o
```

## Actual error observed
```
error: redefinition of 'int add(int, int)'
```
This happens because the preprocessor pastes the header's contents into the
`.cpp` file twice (once per `#include`), and the compiler sees two full
definitions of `add()` in the same translation unit — a One Definition Rule
violation.

## Fix
Add back the header guard (`#ifndef/#define/#endif` or `#pragma once`).
The second `#include` then expands to nothing, and the file compiles clean.
See `mathutils_guarded.h` for the fixed version.
