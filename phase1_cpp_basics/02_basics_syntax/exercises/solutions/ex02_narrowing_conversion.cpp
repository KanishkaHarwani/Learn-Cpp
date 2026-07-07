// Exercise 2 — Catch a narrowing conversion
#include <iostream>

int main() {
    // Brace-init refuses to compile a narrowing conversion.
    // Uncommenting the next line causes a compile error:
    // int x { 4.7 };

    // Copy-init allows it silently -- x becomes 4, fractional part lost.
    int x = 4.7;
    std::cout << "x (from copy-init, silently truncated) = " << x << '\n';

    // Brace-init is safer precisely because it catches this at compile time
    // instead of letting a silent bug slip into a build.
    return 0;
}
