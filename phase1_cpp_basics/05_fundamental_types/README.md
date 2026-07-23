# 05 — Fundamental Types

**Day range:** _fill in when you do this topic_

## Concepts (in my own words)

- **Integer types** — `int`, `short`, `long`, `long long`. Size isn't
  guaranteed by the standard (only a minimum), so always check with
  `sizeof` on the actual platform instead of assuming.
  - `int` is usually 4 bytes on modern desktop platforms.
  - `sizeof(x)` returns bytes, type `size_t` (unsigned).
- **Signed vs unsigned** — unsigned types can't go negative; they wrap
  around instead (`0u - 1` becomes a huge positive number, not -1).
  Mixing signed and unsigned in comparisons is a classic footgun —
  the signed value gets silently converted to unsigned.
- **Floating point** — `float` (single precision, ~7 digits), `double`
  (double precision, ~15-17 digits, the default for most math). Never
  compare floats with `==` — use an epsilon/tolerance check instead.
- **char** — technically an integer type that holds a character code
  (ASCII/UTF-8 byte). `char c = 'A';` is really storing 65.
- **bool** — `true`/`false`, but implicitly converts to/from `int`
  (`0` = false, anything else = true). Careful with accidental int→bool
  conversions in conditions.
- **Fixed-width types** (`<cstdint>`) — `int32_t`, `uint8_t`, `int64_t`,
  etc. Use these instead of plain `int`/`long` when the exact size
  actually matters (embedded, file formats, networking).
- **Literals** — `10` is `int`, `10u` is `unsigned`, `10L` is `long`,
  `10.0f` is `float`, `10.0` is `double`. Suffix matters for overload
  resolution and avoiding implicit conversions.
- **Integer overflow** — signed overflow is undefined behavior (don't
  rely on wraparound). Unsigned overflow is well-defined (wraps modulo
  2^n).
- **Type conversions** — implicit (compiler does it silently, can lose
  data — "narrowing") vs explicit (`static_cast<T>(x)`, safer and
  documents intent).
- **`auto`** — lets the compiler deduce the type from the initializer.
  Useful for long/ugly types, but can obscure what type you actually
  have if overused.
- **`const`** — value can't be modified after initialization. Good
  default for anything that shouldn't change; makes intent clear to
  future-you and the compiler.

## Gotchas

- `sizeof(char)` is always 1 by definition, but that "1" is a
  platform-defined number of bits (almost always 8, not guaranteed).
- `unsigned int a = -1;` compiles with no error — just silently wraps
  to a huge number. Compiler warnings (`-Wall -Wextra -Wconversion`)
  catch most of this; turn them on early.
- `float` precision errors compound — never use `float`/`double` for
  money; use integer cents or a fixed-point/decimal type instead.
- `auto` + `&` vs plain `auto` matters — `auto x = someRef;` copies,
  `auto& x = someRef;` doesn't. Easy to get an unintended copy.

## Doc links

- cppreference fundamental types: https://en.cppreference.com/w/cpp/language/types
- cppreference `<cstdint>`: https://en.cppreference.com/w/cpp/header/cstdint
- cppreference `static_cast`: https://en.cppreference.com/w/cpp/language/static_cast
