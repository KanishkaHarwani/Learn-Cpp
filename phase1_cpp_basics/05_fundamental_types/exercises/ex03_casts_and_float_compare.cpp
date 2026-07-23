// ex03_casts_and_float_compare.cpp
//
// Goal: practice explicit casting and see why `==` on floats is unsafe.

#include <iostream>
#include <cmath>

bool nearlyEqual(double a, double b, double epsilon = 1e-9) {
    return std::fabs(a - b) < epsilon;
}

int main() {
    // Implicit narrowing conversion (double -> int), loses the
    // fractional part silently.
    double pi = 3.14159;
    int truncated = pi;
    std::cout << "1) implicit double->int: " << truncated << "\n";

    // Same conversion, but explicit and self-documenting.
    int truncatedExplicit = static_cast<int>(pi);
    std::cout << "2) explicit static_cast: " << truncatedExplicit << "\n";

    // Classic float equality trap.
    double x = 0.1 + 0.2;
    std::cout << "3) 0.1 + 0.2 == 0.3 ? "
              << (x == 0.3 ? "true" : "false") << "\n";
    std::cout << "   0.1 + 0.2 = " << x << " (not exactly 0.3!)\n";
    std::cout << "   nearlyEqual check -> "
              << (nearlyEqual(x, 0.3) ? "true" : "false") << "\n";

    // TODO: write a small function that safely converts a `double` to
    // an `int` only if it fits within int's range (use
    // std::numeric_limits<int>::min()/max()), otherwise prints an
    // error instead of silently truncating.

    return 0;
}
