
# C Foundations Lab

A version-controlled environment for mastering low-level systems programming and computer architecture fundamentals in C.

## Purpose
This repository documents my incremental progression through core computer science concepts. The primary focus is on writing clean, resource-efficient code rather than just reaching a functional output. Emphasis is placed on understanding memory allocation, data type constraints, and algorithmic efficiency.

## Repository Structure
Each directory contains a standalone problem case study, including:
*   **Source Code:** The `solution.c` file containing the implementation.
*   **Documentation:** A local `README.md` detailing the technical approach, time/space complexity, and tested edge cases.
*   **Execution:** Standard GCC compilation commands.

## Current Focus Areas
*   Data type boundary detection and integer overflow prevention.
*   In-place memory manipulation and zero-allocation algorithms.
*   Deterministic state tracking and computational cycles.


## Implemented Programs

| File | Concept / Paradigm | Time Complexity | Space Complexity (Call Stack) |
|---|---|---|---|
| `hanoi_tower.c` | Tree Recursion, Divide & Conquer | $O(2^n)$ | $O(n)$ |

### Compilation & Execution
```bash
gcc -Wall -Wextra -std=c11 hanoi_tower.c -o hanoi_tower
./hanoi_tower