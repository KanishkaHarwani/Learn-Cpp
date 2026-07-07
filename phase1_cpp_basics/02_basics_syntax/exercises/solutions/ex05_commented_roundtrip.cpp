/* Exercise 5 — Comments as documentation
 *
 * This program asks the user for their name and age, then prints a
 * sentence projecting their age 10 years from now. It's the same logic
 * as Exercise 4, annotated with comments explaining the non-obvious bits.
 */
#include <iostream>
#include <string>

int main() {
    std::string name{};
    int age{};

    std::cout << "What's your name? ";
    std::cin >> name;   // std::cin >> stops reading at the first whitespace,
                         // so this only captures a single word for now --
                         // multi-word input is covered later with getline.

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "Hi " << name << ", in 10 years you'll be "
              << (age + 10) << ".\n";  // '\n' instead of std::endl: avoids
                                        // an unnecessary buffer flush.
    return 0;
}
