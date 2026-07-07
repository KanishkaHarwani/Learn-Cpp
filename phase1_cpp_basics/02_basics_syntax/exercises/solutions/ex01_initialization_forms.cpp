// Exercise 1 — Initialization forms
#include <iostream>

int main() {
    int a = 5;   // copy-initialization
    int b(5);    // direct-initialization
    int c{5};    // brace (list) initialization -- PREFERRED

    std::cout << "a=" << a << " b=" << b << " c=" << c << '\n';

    // Prefer brace-initialization: it's consistent everywhere (variables,
    // objects, arrays) and it refuses to compile on narrowing conversions
    // (see Exercise 2), which the other two forms silently allow.
    return 0;
}
