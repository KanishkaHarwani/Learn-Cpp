# Mini Project — Bug Hunt

A small "inventory tracker" program with several bugs baked in on purpose.
The goal isn't to write new code — it's to practice the debugging toolkit
from this topic on something bigger than a single-bug exercise.

## What it does (once fixed)

Reads a list of items with quantities, lets you add/remove stock, and
prints a running total. Right now it has at least three bugs:

1. A crash when removing more stock than exists (array bounds issue).
2. A memory leak when items are removed (allocated memory never freed).
3. A silently wrong running total (logic bug — no crash, just bad output).

## How to work through it

1. Write `inventory.cpp` here implementing the description above (or use
   your own earlier exercise code as a starting point) and deliberately
   introduce the three bugs, OR pull in a buggy version if you already
   have one lying around from class/practice.
2. Compile with debug symbols: `g++ -g inventory.cpp -o inventory`
3. Bug 1 (crash): reproduce it, then find the exact line with
   `gdb ./inventory` + `run` + `backtrace`.
4. Bug 2 (leak): run under `valgrind --leak-check=full ./inventory` or
   rebuild with `-fsanitize=address` and check the report.
5. Bug 3 (wrong output, no crash): step through with `gdb` using
   `break`, `next`, and `print` on the running total until the value
   diverges from what you expect.
6. Fix each bug, and note in this README what the root cause was and
   which tool caught it.

## What I found (fill in after doing it)

- Bug 1 root cause:
- Bug 2 root cause:
- Bug 3 root cause:
- Which tool was most useful for each:
