// ex03_valgrind_leak.cpp
//
// Goal: find and fix the memory leak using either valgrind or
// AddressSanitizer.
//
//   Option A (valgrind):
//     g++ -g ex03_valgrind_leak.cpp -o ex03
//     valgrind --leak-check=full ./ex03
//
//   Option B (AddressSanitizer, faster, no separate tool needed):
//     g++ -g -fsanitize=address ex03_valgrind_leak.cpp -o ex03
//     ./ex03

#include <iostream>

struct Node {
    int value;
    Node* next;
};

void buildList(int count) {
    Node* head = nullptr;
    for (int i = 0; i < count; i++) {
        Node* n = new Node{i, head};
        head = n;
    }
    // Bug: `head` and every node it points to is never deleted before
    // the function returns — classic leak.
}

int main() {
    buildList(10);
    std::cout << "Done building list (check for leaks above/below)\n";
    return 0;
}
