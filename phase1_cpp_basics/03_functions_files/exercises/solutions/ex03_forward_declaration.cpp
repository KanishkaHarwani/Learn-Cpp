// Exercise 3 — Forward declaration
#include <iostream>

int square(int x); // forward declaration -- without this, main() wouldn't
                    // compile because square() isn't known yet at this point
                    // in the file. Without it you'd get an error like:
                    // "error: 'square' was not declared in this scope"

int main() {
    std::cout << "5 squared is " << square(5) << '\n';
    return 0;
}

int square(int x) {
    return x * x;
}
