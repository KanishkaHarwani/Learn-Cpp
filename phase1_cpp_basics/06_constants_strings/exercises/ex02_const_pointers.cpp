// ex02_const_pointers.cpp
//
// Goal: predict which lines compile and which don't BEFORE running
// this, then check yourself. This is the classic const-pointer
// confusion exercise.

#include <iostream>

int main() {
    int a = 1;
    int b = 2;

    // 1) pointer to const int: can't change *p, CAN reassign p
    const int* p1 = &a;
    // *p1 = 5;      // would fail to compile
    p1 = &b;         // fine
    std::cout << "1) p1 now points to b, *p1 = " << *p1 << "\n";

    // 2) const pointer to int: CAN change *p, can't reassign p
    int* const p2 = &a;
    *p2 = 5;         // fine
    // p2 = &b;      // would fail to compile
    std::cout << "2) p2 changed *p2, a = " << a << "\n";

    // 3) const pointer to const int: can't do either
    const int* const p3 = &a;
    // *p3 = 10;     // would fail
    // p3 = &b;      // would fail
    std::cout << "3) p3 is fully locked, *p3 = " << *p3 << "\n";

    // TODO: write a function `void printValue(const int* p)` that
    // takes a pointer-to-const-int, and call it with both p1 and p2.
    // Then try writing a version that takes `int* const p` instead
    // and see whether it still accepts both.

    return 0;
}
