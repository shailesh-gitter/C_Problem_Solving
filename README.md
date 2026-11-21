# C Foundations Lab

A version-controlled environment for mastering low-level systems programming and computer architecture fundamentals in C.

## Purpose
This repository documents my incremental progression through core computer science concepts. The primary focus is on writing clean, resource-efficient code rather than just reaching a functional output. Emphasis is placed on understanding memory allocation, data type constraints, and algorithmic efficiency.

## Repository Structure
The repository is organized into topical directories, each containing source implementations and target cases:
- **`Functions/`**: Recursive state transitions, stack frame dynamics, divide-and-conquer strategy, and numerical approximations.
- **`arrays/`**: In-place array operations, multidimensional grid manipulation, string transformations, dynamic allocation, and randomized matrix traversals.
- **`pointers/`**: Pointer arithmetic, pass-by-reference semantics, custom string manipulation, command-line arguments, and x86-64 assembly inspection.
- **`structures/`**: User-defined composite data types, memory alignment, and structured data modeling.
- **Documentation:** Clear code structure detailing technical approach, time/space complexity, and tested edge cases.
- **Execution:** Standard GCC compilation commands targeting ANSI C/C11 standards.

## Current Focus Areas
- Data type boundary detection and integer overflow prevention.
- In-place memory manipulation and zero-allocation algorithms.
- Deterministic state tracking and computational cycles.
- Pointer arithmetic, heap management, and contiguous memory layout analysis.

## Implemented Programs

### Functions & Recursion (`Functions/`)

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
| `counting_tokens.c` | String Tokenization, Delimiter State Parsing | $O(n)$ | $O(1)$ |
| `dynamic_memory_allocation_array.c` | Heap Memory Management (`malloc`/`calloc`/`free`), Dynamic Resizing | $O(n)$ | $O(n)$ |
| `hollow_shader.c` | 2D Matrix Boundary Logic, Conditional Grid Rendering | $O(R \times C)$ | $O(1)$ |
| `last_name.c` | Character Array Parsing, Substring Extraction | $O(n)$ | $O(1)$ |
| `magic_square.c` | 2D Matrix Simulation, Modular Coordinate Wrapping | $O(n^2)$ | $O(n^2)$ |
| `no_of_notes.c` | Greedy Denomination Decomposition, Integer Division | $O(1)$ | $O(1)$ |
| `phone_number.c` | Character-to-Digit Mapping, Input Formatting | $O(n)$ | $O(1)$ |
| `the_anagram_finder.c` | Frequency Histogram Counting, Character Mapping | $O(n)$ | $O(1)$ |
| `the_random_walker.c` | 2D Grid Simulation, Random Walk Algorithm, Boundary Checking | $O(N)$ | $O(R \times C)$ |
| `the_sentence_reverser.c` | In-Place Word/Sentence Reversal, Two-Pointer Buffer Traversal | $O(n)$ | $O(n)$ |

### Pointers & Memory Indirection (`pointers/`)

| File | Concept / Paradigm | Time Complexity | Space Complexity |
|---|---|---|---|
| `BMI.c` | Pass-by-Reference Computation, Pointer Dereferencing | $O(1)$ | $O(1)$ |
| `argc_and_argv.c` | Command-Line Argument Vectors, Pointer-to-Pointer (`char **`) Traversal | $O(n)$ | $O(1)$ |
| `arithematic.c` | Pointer Arithmetic, Stride Scaling & Address Offsets | $O(n)$ | $O(1)$ |
| `passing_structures_into_function.c` | Struct Pointers, Arrow Operator (`->`), Zero-Copy Function Calls | $O(1)$ | $O(1)$ |
| `strcpy_using_pointers.c` | Custom String Copy via Pointer Increment & Null-Terminator Detection | $O(n)$ | $O(1)$ |
| `strlen_using_pointers.c` | Pointer Subtraction (`end - start`) for String Length Calculation | $O(n)$ | $O(1)$ |
| `structure_pointers_basics.c` | Dynamic Struct Referencing, Member Indirection | $O(1)$ | $O(1)$ |
| `the_largest_num_in_array.c` | Contiguous Array Traversal via Pointer Iteration | $O(n)$ | $O(1)$ |
| `the_reverser.c` | Two-Pointer In-Place Array Reversal (`left++`, `right--`) | $O(n)$ | $O(1)$ |
| `the_reverser.s` | GCC-Generated x86-64 Assembly Output for Pointer Reversal Analysis | — | — |

### Structures (`structures/`)

| File | Concept / Paradigm | Time Complexity | Space Complexity |
|---|---|---|---|
| `basic_struct.c` | Composite Data Types, Struct Declaration & Member Initialization | $O(1)$ | $O(1)$ |

---

### Compilation & Execution
Compile any program using `gcc` with strict diagnostic flags:

```bash
# Example: Compiling a functions/recursion module
gcc -Wall -Wextra -std=c11 Functions/hanoi_tower.c -o Functions/hanoi_tower
./Functions/hanoi_tower

# Example: Compiling a pointers module
gcc -Wall -Wextra -std=c11 pointers/the_reverser.c -o pointers/the_reverser
./pointers/the_reverser