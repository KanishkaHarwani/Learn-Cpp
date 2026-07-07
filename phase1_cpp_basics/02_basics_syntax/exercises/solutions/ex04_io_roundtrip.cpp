// Exercise 4 — Basic input/output round-trip
#include <iostream>
#include <string>

int main() {
    std::string name{};
    int age{};

    std::cout << "What's your name? ";
    std::cin >> name;

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "Hi " << name << ", in 10 years you'll be "
              << (age + 10) << ".\n";
    return 0;
}
