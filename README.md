# C Programming — BCA First Semester (BCA 102)

**Course:** C Programming  
**Course code:** BCA-102  
**University:** Tribhuvan University (TU), Nepal  
**Year/Semester:** First Year / First Semester  
**Credits:** 3  
**Workload:** 6 hours/week (3 theory + 3 practical)

This repository contains beginner-friendly C programs organized according to the **BCA 102 C Programming syllabus** in the uploaded BCA syllabus document.

## Syllabus-based structure

```text
BCA-C-Programming-BCA102/
├── Unit_1_Introduction_to_C/
├── Unit_2_Input_Output_and_Control_Structures/
├── Unit_3_Functions_Arrays_and_Strings/
├── Unit_4_Structures_Unions_and_Enumerations/
├── Unit_5_Pointers_and_Memory_Management/
├── Unit_6_File_Handling_Command_Line_and_Graphics/
├── README.md
├── SYLLABUS.md
└── .gitignore
```

## Units covered

| Unit | Syllabus area | Programs |
|---|---|---:|
| 1 | Introduction to C programming language and basics | 8 |
| 2 | Input/Output and Control Structures | 12 |
| 3 | Functions, Arrays and String | 13 |
| 4 | Structures, Unions, and Enumerations | 6 |
| 5 | Pointers and Memory Management | 7 |
| 6 | File Handling, Command-Line Arguments, and Graphics | 8 |

The programs are examples for learning and practical preparation. They are not represented as official TU question solutions.

## Requirements

- GCC compiler (recommended)
- Visual Studio Code, Code::Blocks, Dev-C++, or another C editor
- Terminal / command prompt

On macOS, install the Xcode Command Line Tools if GCC/Clang is not available:

```bash
xcode-select --install
```

Check the compiler:

```bash
gcc --version
```

## Compile and run a program

Move into the folder containing the source file. For example:

```bash
cd Unit_1_Introduction_to_C
gcc 01_hello_world.c -o hello
./hello
```

General pattern:

```bash
gcc filename.c -o program
./program
```

On Windows:

```bash
gcc filename.c -o program.exe
program.exe
```

For programs using the math library on some Linux systems:

```bash
gcc filename.c -o program -lm
```

## Important notes

- Each `.c` file is a separate program and has its own `main()` function. Compile one file at a time.
- Standard C programs use portable headers such as `stdio.h`, `stdlib.h`, `string.h`, and `math.h`.
- `getch()`, `getche()`, `clrscr()`, `strrev()`, `strupr()`, and `strlwr()` are not part of the ISO C standard library. Where relevant, this repository uses portable alternatives or labels legacy functions.
- Graphics examples based on `graphics.h` are compiler/library dependent. They are not expected to compile with a normal GCC installation unless a compatible BGI graphics library is configured. See the Unit 6 README.
- Always test input and understand the logic before submitting a practical.

## Maintained by

**Rupesh Adhikari** · **BCA Nepal**

Learn. Practice. Prepare. Succeed.
