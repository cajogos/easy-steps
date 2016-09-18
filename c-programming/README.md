# C Programming
This repository folder is for the book [C Programming in Easy Steps](http://amzn.to/2bOTEDM).

## Table of Contents
1. [Getting Started](chapter-001) `(chapter-001)`
2. [Storing Variable Values](chapter-002) `(chapter-002)`
3. [Setting Constant Values](chapter-003) `(chapter-003)`
4. [Performing Operations](chapter-004) `(chapter-004)`
5. [Making Statements](chapter-005) `(chapter-005)`
6. [Employing Functions](chapter-006) `(chapter-006)`
7. [Pointing to Data](chapter-007) `(chapter-007)`
8. [Manipulating Strings](chapter-008) `(chapter-008)`
9. [Building Structures](chapter-009) `(chapter-009)`
10. [Producing Results\*](chapter-010) `(chapter-010)`

\* not completed.

## Notes
### Compiling using GCC (GNU Compiler Collection)

Run the following command:

```bash
gcc file.c -o file.exe
```

To keep the assembly files use:

```bash
gcc file.c -save-temps -o file.exe
```

Compiling multiple files into one executable:

```bash
gcc [files].c -o file.exe
```

### Running Compiled File

To run the compiled file using Cygwin's terminal you must use Linux's `./`.

```bash
./file.exe
```