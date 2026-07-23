# Mini Project — Mini Config Parser

A small parser for simple `key=value` config text, combining string
handling with const-correctness practice.

## What to build

A function/program that:

- Takes a multi-line block of text like:
  ```
  name=Ada Lovelace
  max_users=100
  debug=true
  ```
- Parses each line into a key and a value using `std::string::find` and
  `substr` (split on the first `=`).
- Stores results in something like `std::vector<std::pair<std::string,
  std::string>>` (or a `std::map<std::string, std::string>` if you've
  seen maps already).
- Provides a lookup function:
  `std::string getValue(const std::vector<...>& config, const std::string& key)`
  — note the `const&` params, this function should not copy or modify
  the config.
- Uses a `constexpr` for something that's genuinely fixed at compile
  time (e.g. the separator character `constexpr char kSeparator = '=';`).
- Skips blank lines and lines starting with `#` (treated as comments)
  without crashing.

## Why this exercise

- Real use of `.find()`, `.substr()`, string concatenation.
- Forces you to pass strings by `const&` instead of by value out of
  habit — check whether you actually did it everywhere.
- A natural place to use `constexpr` for a genuinely fixed value
  instead of a magic character sitting in the middle of code.

## Notes (fill in after doing it)

- Where did you use `const&` vs plain value, and why in each case?
- Any place a `std::string_view` would have worked instead of
  `std::string`? Why or why not?
