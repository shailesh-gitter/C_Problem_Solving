# C Foundations Lab

A version-controlled environment for mastering low-level systems programming and computer architecture fundamentals in C.

## Purpose
This repository documents my incremental progression through core computer science concepts. The primary focus is on writing clean, resource-efficient code rather than just reaching a functional output. Emphasis is placed on understanding memory allocation, data type constraints, and algorithmic efficiency.

## Repository Structure
The repository is organized into topical directories, each containing source implementations and target cases:
* **`01_recursion/`**: Recursive state transitions, stack frame dynamics, divide-and-conquer strategy, and numerical approximations.
* **`arrays/`**: In-place array operations, multidimensional grid manipulation, string transformations, and randomized matrix traversals.
* **Documentation:** Clear code structure detailing technical approach, time/space complexity, and tested edge cases.
* **Execution:** Standard GCC compilation commands targeting ANSI C/C11 standards.

## Current Focus Areas
* Data type boundary detection and integer overflow prevention.
* In-place memory manipulation and zero-allocation algorithms.
* Deterministic state tracking and computational cycles.
* Pointer arithmetic and contiguous memory layout analysis.

## Implemented Programs

### Recursion (`01_recursion/`)

| File | Concept / Paradigm | Time Complexity | Space Complexity |
|---|---|---|---|
| `hanoi_tower.c` | Tree Recursion, Divide & Conquer | $O(2^n)$ | $O(n)$ |
| `sqrt_by_newton.c` | Numerical Approximation, Newton-Raphson Method | $O(\log N)$ | $O(\log N)$ |
| `The_spiral_tower_of_prime_rotations.c` | Recursive State Tracking, Prime Factorization & Rotation | $O(N \cdot \sqrt{P})$ | $O(N)$ |

### Arrays & Matrix Manipulations (`arrays/`)

| File | Concept / Paradigm | Time Complexity | Space Complexity |
|---|---|---|---|
| `2d_array.c` | Multidimensional Array Traversal, Row/Column Indexing | $O(R \times C)$ | $O(1)$ |
| `average_characters.c` | ASCII Character Mapping, Mean Calculation | $O(n)$ | $O(1)$ |
| `concatenation.c` | Array Merging, Contiguous Memory Allocation | $O(m + n)$ | $O(m + n)$ |
| `the_random_walker.c` | 2D Grid Simulation, Random Walk Algorithm, Boundary Checking | $O(N)$ | $O(R \times C)$ |

---

### Compilation & Execution
Compile any program using `gcc` with strict diagnostic flags:

```bash
# Example: Compiling a recursion module
gcc -Wall -Wextra -std=c11 01_recursion/hanoi_tower.c -o 01_recursion/hanoi_tower
./01_recursion/hanoi_tower

# Example: Compiling an array module
gcc -Wall -Wextra -std=c11 arrays/2d_array.c -o arrays/2d_array
./arrays/2d_array
