// Exercise 3 — Uninitialized variable (observe, then fix)
#include <iostream>

int main() {
    // BEFORE (commented out -- this is undefined behavior, do not rely on
    // the value it happens to print; it could be 0, garbage, or vary
    // between runs/compilers/optimization levels):
    // int mystery;
    // std::cout << mystery << '\n';

    // FIXED: always initialize.
    int mystery { 0 };
    std::cout << "mystery = " << mystery << '\n';
    return 0;
}
