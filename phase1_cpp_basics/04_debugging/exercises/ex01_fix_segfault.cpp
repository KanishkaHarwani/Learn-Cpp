// ex01_fix_segfault.cpp
//
// Goal: this program crashes. Compile it with debug symbols, run it under
// gdb, use `backtrace` to find the crash site, then fix the bug.
//
//   g++ -g ex01_fix_segfault.cpp -o ex01
//   gdb ./ex01
//   (gdb) run
//   (gdb) backtrace
//
// Bug is intentional — don't peek at the fix before trying gdb first.

#include <iostream>

int* makeArray(int size) {
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i * 2;
    }
    return arr;
}

int main() {
    int* data = makeArray(5);

    // Bug: off-by-one, reads/writes one past the end of the array.
    for (int i = 0; i <= 5; i++) {
        std::cout << "data[" << i << "] = " << data[i] << "\n";
    }

    delete[] data;
    return 0;
}
