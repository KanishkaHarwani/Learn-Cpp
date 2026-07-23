// ex01_const_vs_constexpr.cpp
//
// Goal: get a feel for what compiles and what doesn't with const vs
// constexpr. Uncomment the marked lines one at a time to see which
// ones fail to compile, and understand why.

#include <iostream>

int getRuntimeValue() {
    return 42; // pretend this came from user input / a file / etc.
}

int main() {
    constexpr int compileTimeConst = 10;      // fine: known at compile time
    const int runtimeConst = getRuntimeValue(); // fine: const, but NOT constexpr

    int arr1[compileTimeConst]; // fine: constexpr can size an array
    std::cout << "arr1 size ok, sizeof = " << sizeof(arr1) << "\n";

    // Uncomment to see the compile error (runtimeConst isn't known
    // until the program actually runs, so it can't size an array):
    // int arr2[runtimeConst];

    // constexpr int badConst = getRuntimeValue(); // also fails - try it

    std::cout << "runtimeConst = " << runtimeConst << "\n";

    // TODO: write a constexpr function `int square(int x)` and use it
    // to size a compile-time array, e.g. `int arr3[square(4)];`.

    return 0;
}
