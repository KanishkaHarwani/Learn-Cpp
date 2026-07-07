// Exercise 6 — Return on every path
#include <iostream>
#include <string>

std::string sizeCategory(int value) {
    if (value < 10) {
        return "small";
    } else if (value < 100) {
        return "medium";
    } else {
        return "large";
    }
    // No path falls through without returning -- every branch above returns.
}

int main() {
    std::cout << "5 -> " << sizeCategory(5) << '\n';
    std::cout << "42 -> " << sizeCategory(42) << '\n';
    std::cout << "500 -> " << sizeCategory(500) << '\n';
    return 0;
}
