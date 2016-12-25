# 9. Processing Macros

This chapter demonstrates how the C++ compiler can be made to perform useful tasks before compiling a program.

## Notes

Run the following command to obtain the `.o`, `.ii` and `.s` files for your program:

```bash
c++ prog.cpp -save-temps-c
```

## Summary

* The **C++ Compiler**'s `-save-temps` option saves the temporary files created during the compilation process for examination.
* Compilation first writes program code and included library code into a single `.ii` text file, which is then translated into low-level **Assembly** language is a `.s` text file.
* **Assembly** language `.s` files are translated to machine code as `.o` object files, which are used to create the executable program.
* A `#define` directive defines a macro name and a value that the preprocessor should substitute for that name in program code.
* The preprocessor can be made to perform conditional tests using `#ifdef`, `#ifndef`, and `#endif` directives.
* Preprocessor alternatives can be provided using `#if`, `#else`, and `#elif` directives, and a definition can be removed using `#undef`.
* Each header file should use inclusion guards to prevent accidental multiple definition of the same class or function.
* The macro name of an inclusion guard is an uppercase version of the file name, but with the dot replaced by an underscore.
* A `#define` directive may also define a macro function that will be substituted in program code in place of the macro name.
* Inline functions are usually preferable to macro functions because, unlike macro functions, they perform type-checking.
* The preprocessor `#` stringizing operator converts a series of characters passed as a macro argument into a string value.
* Two terms can be combined into a single term by the preprocessor `##` merging operator.
* An `ASSERT` macro function is useful for debugging code and may be controlled by a `DEBUG` macro to easily turn debugging on or off.















