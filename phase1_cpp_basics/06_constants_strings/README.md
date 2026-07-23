# 06 — Constants & Strings

**Day range:** _fill in when you do this topic_

## Concepts (in my own words)

### Constants

- **`const`** — value can't change after initialization. Applies at
  the variable declaration; can be read at compile time or runtime.
  ```cpp
  const int maxUsers = 100;
  ```
- **`constexpr`** — stronger guarantee than `const`: the value must be
  computable *at compile time*. Use for things like array sizes,
  fixed math constants, lookup table dimensions.
  ```cpp
  constexpr double pi = 3.14159265358979;
  constexpr int bufferSize = 64 * 1024;
  ```
- **`const` vs `constexpr`** — every `constexpr` is implicitly `const`,
  but not every `const` is `constexpr` (a `const` initialized from a
  runtime value, like user input, is not compile-time).
- **`#define` (old C-style)** — text substitution by the preprocessor,
  no type checking, no scoping. Prefer `constexpr`/`const` in modern
  C++; reserve `#define` for include guards and conditional compilation.
- **Pointers and const** — order matters:
  - `const int* p` — pointer to a const int (can't change *what it
    points to* through p, can reassign p itself).
  - `int* const p` — const pointer to an int (can change the value,
    can't reassign p).
  - `const int* const p` — both.
  - Read right-to-left from the `*` for these: helps untangle them.
- **Const correctness in functions** — pass-by-const-reference
  (`const std::string& name`) to avoid copies while promising the
  function won't modify the argument.

### Strings

- **C-style strings** — `char arr[] = "hi";` or `const char* s = "hi";`,
  null-terminated (`\0` at the end). Manual memory management, easy to
  overflow buffers. Mostly legacy now, but still shows up interfacing
  with C APIs.
- **`std::string`** — the modern default. Owns its memory, resizes
  automatically, has rich member functions (`.length()`, `.substr()`,
  `.find()`, `.append()`, operator `+` for concatenation, etc.)
- **`std::string_view`** (C++17) — a non-owning, read-only "view" into
  a string (or C-string). Cheap to pass around (no copy), but the
  underlying data must outlive the view — dangling is a real risk if
  the original string is destroyed first.
- **Common `std::string` operations**:
  - `s.length()` / `s.size()` — same thing, either name works.
  - `s.substr(pos, len)` — extract a substring.
  - `s.find("x")` — returns index or `std::string::npos` if not found.
  - `s + " more"` — concatenation (also `+=`).
  - Comparing strings with `==` works correctly (unlike C-strings,
    where `==` compares pointers, not contents — need `strcmp` there).
- **String literals** — `"hello"` is a `const char[6]` (includes the
  null terminator) by default. `"hello"s` (with the `s` suffix, needs
  `using namespace std::string_literals;`) makes it a real
  `std::string` directly.

## Gotchas

- Comparing two C-strings with `==` compares addresses, not contents —
  classic beginner bug. Use `std::string` or `strcmp` for C-strings.
- `constexpr` functions/variables must be fully known at compile time —
  can't use anything that depends on runtime input (file reads, user
  input, etc).
- `std::string_view` can dangle if it outlives the string/buffer it
  points into — don't return a `string_view` into a local `std::string`
  from a function.
- `const int* p` reads as "pointer to const int," not "const pointer" —
  easy to misread at a glance; the right-to-left trick helps.

## Doc links

- cppreference `constexpr`: https://en.cppreference.com/w/cpp/language/constexpr
- cppreference `std::string`: https://en.cppreference.com/w/cpp/string/basic_string
- cppreference `std::string_view`: https://en.cppreference.com/w/cpp/string/basic_string_view
