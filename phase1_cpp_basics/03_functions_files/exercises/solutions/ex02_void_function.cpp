// Exercise 2 — Void function (side effect only)
#include <iostream>

void printDivider() {
    std::cout << "----------\n";
}

int main() {
    std::cout << "Section 1\n";
    printDivider();
    std::cout << "Section 2\n";
    printDivider();
    std::cout << "Section 3\n";
    return 0;
}
