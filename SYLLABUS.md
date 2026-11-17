# BCA 102 — C Programming syllabus coverage

This outline is transcribed and organized from the uploaded BCA New Syllabus document. The course is listed as **C Programming**, course code **BCA-102**, First Year / First Semester, 3 credits, with a weekly workload of 3 theory hours and 3 practical hours.

## Unit 1 — Introduction to C programming language and basics (5 hours)

- Evolution of programming languages
- History, characteristics and applications of C
- Structure of a C program
- Compilation and execution process
- C tokens: keywords, identifiers, constants, string literals and operators
- Variables: declaration, initialization, scope and lifetime
- Data types: basic, derived and user-defined
- Type casting: implicit and explicit conversion
- Operators and expressions; precedence and associativity

## Unit 2 — Input/Output and Control Structures (11 hours)

- Standard input/output: `printf()` and `scanf()`
- Character I/O: `getchar()`, `putchar()` and legacy console functions listed in the syllabus
- Decision making: `if`, `if-else`, nested `if-else`, else-if ladder, `switch`, conditional operator
- Loops: `while`, `do-while`, `for`, nested loops
- Jump statements: `break`, `continue`, `goto`

## Unit 3 — Functions, Arrays and String (11 hours)

- Function advantages, definition, declaration/prototype and call
- Library and user-defined functions
- Call by value and call by reference (using pointers in C)
- Recursion
- One-dimensional, two-dimensional and multidimensional arrays
- Arrays and functions; matrix operations
- Strings, string input/output and array of strings
- String handling functions

## Unit 4 — Structures, Unions, and Enumerations (5 hours)

- Defining and declaring structures
- Accessing members, nested structures and arrays of structures
- Passing structures to functions
- Defining and declaring unions; comparison with structures
- Enumerations (`enum`) and `typedef`

## Unit 5 — Pointers and Memory Management (5 hours)

- Pointer declaration, initialization and dereferencing
- Pointer arithmetic
- Pointers with arrays, strings, functions and structures
- Dynamic memory allocation: `malloc()`, `calloc()`, `realloc()` and `free()`
- Dynamic memory allocation with structures
- Dangling pointers and memory leaks

## Unit 6 — File Handling, Command-Line Arguments, and Graphics (11 hours)

- Text and binary files; opening, closing, reading and writing
- File modes and standard I/O functions
- Random access: `fseek()`, `ftell()` and `rewind()`
- File error handling
- `main()` parameters: `argc` and `argv`
- Command-line arguments
- Graphics concepts, graphics modes, drawing primitives, colors, fill styles, text and simple animation

## Practical component

The syllabus specifies at least 48 practical hours. Practical emphasis includes fundamental constructs, control flow, functions, arrays and strings, pointers and dynamic memory, structured data types, file operations, command-line interaction and basic graphics programming.

**Accuracy note:** Some functions named in the scanned syllabus (for example `getch()`, `gets()`, `strrev()`, `strupr()` and `strlwr()`) are non-standard or removed from modern C standards. The repository favors safe, portable alternatives and explains compatibility where necessary.
