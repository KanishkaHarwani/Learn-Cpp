// Exercise 1 — Basic function with return value
#include <iostream>

int add(int x, int y) {
    return x + y;
}

int main() {
    std::cout << "2 + 3 = " << add(2, 3) << '\n';
    std::cout << "-5 + 10 = " << add(-5, 10) << '\n';
    return 0;
}
