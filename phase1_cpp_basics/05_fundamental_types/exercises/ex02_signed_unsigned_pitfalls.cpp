// ex02_signed_unsigned_pitfalls.cpp
//
// Goal: predict the output on paper first, then compile and run to
// check yourself. This is about building intuition for where signed/
// unsigned mixing bites you.

#include <iostream>

int main() {
    unsigned int a = 0;
    a = a - 1;
    std::cout << "1) unsigned 0 - 1 = " << a << "\n";

    int negative = -1;
    unsigned int positive = 1;
    // Comparing signed vs unsigned: `negative` gets converted to unsigned
    // before the comparison happens.
    if (negative < positive) {
        std::cout << "2) -1 < 1u -> true\n";
    } else {
        std::cout << "2) -1 < 1u -> false (surprised? this is the pitfall)\n";
    }

    // TODO: write a small loop that counts down from an unsigned
    // variable to 0 using `>= 0` as the condition. Run it and explain
    // in a comment why it either behaves correctly or loops forever.

    // TODO: trigger signed integer overflow with INT_MAX + 1 (from
    // <climits>) and compare the (undefined) behavior you see vs what
    // unsigned overflow does.

    return 0;
}
