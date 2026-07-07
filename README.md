# LearnC++ — 60 Day Roadmap

A structured 60-day C++ learning repo, organized by topic (not raw day number),
following [LearnCpp.com](https://www.learncpp.com/) as the primary curriculum,
with supplemental topics (multithreading, testing) layered into Phase 2.

## Progress Tracker
- [ ] Phase 1: C++ Basics (Day 1-20)
- [ ] Phase 2: Libraries & Practical Tooling (Day 21-40)
- [ ] Phase 3: Advanced Concepts & Capstones (Day 41-60)

## Phase 1 — C++ Basics (Day 1-20)
| Day  | Topic                                    | Status | Notes |
|------|-------------------------------------------|--------|-------|
| TBD  | Setup & Toolchain                         |        |       |
| TBD  | Basics & Syntax                           |        |       |
| TBD  | Functions & Multi-File Programs           |        |       |
| TBD  | Debugging                                 |        |       |
| TBD  | Fundamental Types                         |        |       |
| TBD  | Constants & Strings                       |        |       |
| TBD  | Operators                                 |        |       |
| TBD  | Scope & Linkage                           |        |       |
| TBD  | Control Flow                              |        |       |
| TBD  | Error Handling Basics                     |        |       |
| TBD  | Type Conversion                           |        |       |
| TBD  | Overloading & Templates Intro             |        |       |
| TBD  | Pointers & References                     |        |       |
| TBD  | Enums & Structs                           |        |       |

## Phase 2 — Libraries & Practical Tooling (Day 21-40)
| Day  | Topic                                    | Status | Notes |
|------|--------------------------------------------|--------|-------|
| TBD  | Intro to Classes                          |        |       |
| TBD  | More Classes (this, static, friend)       |        |       |
| TBD  | std::vector                               |        |       |
| TBD  | std::array & C-style Arrays               |        |       |
| TBD  | Iterators & Algorithms                    |        |       |
| TBD  | Dynamic Allocation                        |        |       |
| TBD  | Advanced Functions (pointers, lambdas)    |        |       |
| TBD  | Operator Overloading                      |        |       |
| TBD  | Move Semantics & Smart Pointers           |        |       |
| TBD  | Multithreading Basics                     |        |       |

## Phase 3 — Advanced Concepts & Capstones (Day 41-60)
| Day  | Topic                                    | Status | Notes |
|------|--------------------------------------------|--------|-------|
| TBD  | Object Relationships                      |        |       |
| TBD  | Inheritance                               |        |       |
| TBD  | Virtual Functions & Polymorphism          |        |       |
| TBD  | Class Templates                           |        |       |
| TBD  | Exceptions                                |        |       |
| TBD  | I/O Streams                               |        |       |

## How This Repo Is Organized
- Organized by **topic**, not raw day number — topic folders age better for later lookup.
- Each topic folder contains:
  - `README.md` — concepts explained in plain language, gotchas, doc links
  - `exercises/Exercises_<Topic_Name>.md` — task list for that topic
  - `exercises/solutions/` — solution `.cpp` files
- Mini-projects (Phase 1 & 2) and capstones (Phase 3) live in their own
  `mini_projects/` or `capstones/` folder at the phase root, each spanning
  a pair (or more) of topics so concepts get integrated, not just drilled
  in isolation.
- Each phase ends with a `PHASE<N>_SUMMARY.md` — what was covered, what was
  hardest, key takeaways, and links back to topic folders.

## Capstone Projects
See [`phase3_advanced_capstones/capstones/`](phase3_advanced_capstones/capstones/):
- **Capstone 1** — Multithreaded Task Scheduler
- **Capstone 2** — Plugin-Style Shape/Drawing System

## Practical Habits
1. Commit daily, even small commits.
2. `.gitignore` from day one (build artifacts, `.o`/`.out`, IDE folders).
3. Keep exercises small and numbered.
4. Write `PHASE_SUMMARY.md` files at the end of each phase.
5. Build in buffer days every ~10 days — don't schedule 60/60 at full density.
6. Keep `README.md` topic notes short and in your own words.
