# Unit 6 — File Handling, Command-Line Arguments and Graphics

Examples cover text and binary files, formatted and character I/O, file error checks, random access with `fseek()`, `ftell()` and `rewind()`, plus `argc`/`argv`.

## Command-line arguments

Compile and run:

```bash
gcc 06_command_line_arguments.c -o args
./args hello 123
```

For the sum program:

```bash
gcc 07_command_line_sum.c -o sum
./sum 10 20 30
```

## Graphics compatibility

The syllabus includes graphics modes, points, lines, rectangles, circles, ellipses, polygons, colors, fill styles, text and simple animation. Traditional `graphics.h` / BGI examples depend on a non-standard library and an appropriate compiler setup. They do not compile with a standard GCC installation by default. The included `08_graphics_concepts_portable.c` demonstrates circle calculations only; it is not a screen-drawing program. Add a BGI-specific implementation only after configuring a compatible graphics environment.
