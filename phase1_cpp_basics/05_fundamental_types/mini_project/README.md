# Mini Project — Unit Converter (optional)

Fundamental types is a smaller/foundational topic, so per the repo
template a mini_project isn't mandatory here — but a tiny applied
exercise still helps cement type choices, so here's one if you want it.

## What to build

A command-line unit converter that:

- Takes a temperature in Celsius (as a `double`) and prints Fahrenheit
  and Kelvin.
- Takes a distance in meters (as a `double`) and prints feet and miles.
- Uses `int32_t`/`uint32_t` from `<cstdint>` somewhere deliberately
  (e.g. counting how many conversions the user has run), just to
  practice fixed-width types instead of plain `int`.
- Rejects a Kelvin result below absolute zero (0 K) with a clear error
  message instead of printing a nonsense negative temperature.

## Why this exercise

- Forces a decision on `float` vs `double` (pick one and justify it in
  a comment).
- Forces at least one explicit `static_cast` somewhere in the input
  handling.
- Small enough to finish in well under an hour, big enough to touch
  most of what's in notes.md.

## Notes (fill in after doing it)

- Which type did you use for the running counter, and why?
- Did you hit any narrowing warnings? What caused them?
