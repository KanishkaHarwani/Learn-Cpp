// Exercise 3 — Trigger and read a compiler warning
//
// WHAT CAUSED THE WARNING (before fix):
//   An unused variable `magicNumber` triggered -Wunused-variable.
//
// WHAT FIXED IT:
//   Removed the unused variable (or used it) — here we actually use it
//   in the output so the compiler has no reason to warn.
#include <iostream>

int main() {
    int magicNumber { 42 };
    std::cout << "The magic number is " << magicNumber << '\n';
    return 0;
}
