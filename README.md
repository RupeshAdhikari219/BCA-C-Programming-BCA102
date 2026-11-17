# C Programming — BCA First Semester (BCA 102)

**Course:** C Programming  
**Course Code:** BCA-102  
**University:** Tribhuvan University (TU), Nepal  
**Year/Semester:** First Year / First Semester  
**Credits:** 3  
**Workload:** 6 hours/week (3 theory + 3 practical)

This repository is a collection of beginner-friendly C programming examples and practical programs for BCA First Semester students. The programs are arranged into six units following the BCA 102 course structure, making it easier to learn concepts step by step and practice each topic.

## Repository Structure

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

## Units Covered

| Unit | Syllabus Area | Programs |
|---|---|---:|
| 1 | Introduction to C Programming Language and Basics | 8 |
| 2 | Input/Output and Control Structures | 12 |
| 3 | Functions, Arrays and Strings | 13 |
| 4 | Structures, Unions, and Enumerations | 6 |
| 5 | Pointers and Memory Management | 7 |
| 6 | File Handling, Command-Line Arguments, and Graphics | 8 |
| **Total** | **6 Units** | **54** |

These programs are intended for learning, practice, and practical examination preparation. They are educational examples, not official TU question solutions.

## Requirements

- GCC compiler (recommended)
- Visual Studio Code, Code::Blocks, Dev-C++, or another C editor
- Terminal / Command Prompt

On macOS, install the Xcode Command Line Tools if GCC/Clang is not available:

```bash
xcode-select --install
```

Check the compiler installation:

```bash
gcc --version
```

## Compile and Run a Program

Navigate to the folder containing the source file. For example:

```bash
cd Unit_1_Introduction_to_C
gcc 01_hello_world.c -o hello
./hello
```

General compilation pattern:

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

## Important Notes

- Each `.c` file is an independent program with its own `main()` function. Compile and run one source file at a time.
- The examples primarily use standard C headers such as `stdio.h`, `stdlib.h`, `string.h`, and `math.h`.
- Functions such as `getch()`, `getche()`, `clrscr()`, `strrev()`, `strupr()`, and `strlwr()` are not part of the ISO C standard library. Where relevant, portable alternatives are used or legacy functions are clearly identified.
- Graphics programs using `graphics.h` depend on a compatible compiler and graphics library. They will not normally compile with a standard GCC installation without additional configuration. Refer to the Unit 6 README for details.
- Test the programs with different inputs and understand their logic while practicing.

## Maintained By

**Rupesh Adhikari** · **BCA Nepal**

*Learn. Practice. Prepare. Succeed.*
