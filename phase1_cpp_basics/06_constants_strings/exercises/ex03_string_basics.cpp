// ex03_string_basics.cpp
//
// Goal: practice std::string's common operations, and see the classic
// C-string equality pitfall firsthand.

#include <iostream>
#include <string>
#include <cstring>

int main() {
    std::string first = "Ada";
    std::string last = "Lovelace";
    std::string full = first + " " + last;

    std::cout << "1) full name: " << full << "\n";
    std::cout << "2) length: " << full.length() << "\n";
    std::cout << "3) substr(0,3): " << full.substr(0, 3) << "\n";

    size_t pos = full.find("Lovelace");
    if (pos != std::string::npos) {
        std::cout << "4) 'Lovelace' found at index " << pos << "\n";
    } else {
        std::cout << "4) 'Lovelace' not found\n";
    }

    // std::string == compares contents correctly.
    std::string a = "hello";
    std::string b = "hello";
    std::cout << "5) std::string a == b ? " << (a == b ? "true" : "false") << "\n";

    // C-string == compares POINTERS, not contents - classic pitfall.
    const char* ca = "hello";
    const char* cb = "hello";
    std::cout << "6) C-string ca == cb ? " << (ca == cb ? "true" : "false")
              << " (comparing addresses, not contents!)\n";
    std::cout << "   correct way: strcmp(ca, cb) == 0 -> "
              << (std::strcmp(ca, cb) == 0 ? "true" : "false") << "\n";

    // TODO: write a small function `bool endsWith(const std::string& s,
    // const std::string& suffix)` using .find() or .substr(), and test
    // it against a few strings.

    return 0;
}
