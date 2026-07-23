// ex02_step_through_gdb.cpp
//
// Goal: this program runs fine but gives the wrong answer. No crash, so
// print debugging won't obviously point at the problem — use gdb to step
// through line by line and watch the variables.
//
//   g++ -g ex02_step_through_gdb.cpp -o ex02
//   gdb ./ex02
//   (gdb) break main
//   (gdb) run
//   (gdb) next      # repeat, watching `total` each time
//   (gdb) print total

#include <iostream>

int sumUpTo(int n) {
    int total = 0;
    // Bug: loop starts at 1 and uses <, so it skips n's contribution
    // when n should be included — off-by-one in the condition.
    for (int i = 1; i < n; i++) {
        total += i;
    }
    return total;
}

int main() {
    int n = 5;
    std::cout << "Sum 1.." << n << " = " << sumUpTo(n) << "\n";
    std::cout << "Expected: 15\n";
    return 0;
}
