# 04 — Debugging

**Day range:** _fill in when you do this topic (e.g. Day 7-8)_

## Concepts (in my own words)

- **Print debugging** — `std::cerr << "x=" << x << "\n";` scattered through code.
  Fast for tiny scripts, gets messy fast, and you always forget to remove them.
- **Debugger (gdb/lldb)** — lets you pause execution, inspect variables, and
  step through code without touching the source.
  - `break <file>:<line>` — set a breakpoint
  - `run` — start the program
  - `next` / `step` — step over / into a line
  - `print <var>` — inspect a variable
  - `backtrace` — see the call stack (essential after a crash)
  - `continue` — resume until next breakpoint
- **Compiling with debug symbols** — need `-g` flag (e.g. `g++ -g main.cpp -o main`)
  or gdb can't map addresses back to source lines/variable names.
- **Segfaults** — usually: dereferencing a null/dangling pointer, out-of-bounds
  array access, or stack overflow from infinite recursion. `backtrace` in gdb
  after a crash is the fastest way to find where.
- **Core dumps** — a snapshot of program memory at the moment of a crash.
  Can load it in gdb after the fact: `gdb ./main core`.
- **Sanitizers** — compiler flags that catch bugs at runtime:
  - `-fsanitize=address` (AddressSanitizer) — catches out-of-bounds access,
    use-after-free, memory leaks.
  - `-fsanitize=undefined` (UBSan) — catches undefined behavior (signed
    overflow, invalid casts, etc.)
- **Valgrind** — external tool, slower than sanitizers but doesn't need a
  recompile. `valgrind --leak-check=full ./main` is the classic memory-leak
  command.
- **Assertions** — `assert(condition)` from `<cassert>`. Crashes loudly and
  immediately if a condition you assumed true turns out false. Great for
  catching bugs close to their source instead of downstream.

## Gotchas

- Debug builds (`-g`, no `-O2`) behave differently from optimized release
  builds — a bug that appears in release but not debug (or vice versa) is
  often related to optimization or uninitialized memory.
- `-fsanitize=address` and `valgrind` don't mix well together — pick one at a time.
- gdb line numbers can be misleading if you edited the file after compiling —
  always rebuild before debugging.

## Doc links

- gdb docs: https://sourceware.org/gdb/documentation/
- AddressSanitizer: https://github.com/google/sanitizers/wiki/AddressSanitizer
- cppreference on `<cassert>`: https://en.cppreference.com/w/cpp/header/cassert
