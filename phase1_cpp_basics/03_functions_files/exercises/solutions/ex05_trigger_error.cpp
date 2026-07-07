// Exercise 5 -- demonstrates the redefinition error from a missing guard.
// Swap which header is included to see broken vs. fixed behavior.

#include "ex05_mathutils_noguard.h"
#include "ex05_mathutils_noguard.h" // included twice on purpose
#include <iostream>

int main() {
    std::cout << add(1, 2) << '\n';
    return 0;
}
