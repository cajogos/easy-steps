# 3. Setting Constant Values

## Summary
- A fixed data that will never change should be stored as a constant, declared with the `const` keyword.
- When declaring a constant the declaration must always initialize the constant with its fixed data value.
- The `enum` keyword creates a sequentially numbered series or integer constants that, by default, start at zero.
- Any constant in an enumerated series can be explicity assigned an integer value, which subsequent constants in that series will increment.
- An enumerated series of constants can be regarded as a new data type, from which variables can be created to store values of the enumeration set defined by that type.
- A custom data type can be defined using the `typedef` keyword, then variables of that type can be created using the same syntax as that used to declare regular variables.
- A preprocessor `#define` directive can be used to specify a constant text value to be substituted before compilation.
- The conditional preprocessor `#ifdef` directive evaluates whether a definition currently exists.
- A macro is a preprocessor routine that must end with an `#endif` directive.
- Compiler-defined constants, such as `_WIN32` and `linux`, can determine the host operating system.
- Macro alternatives can be offered with `#if`, `#else` and `#elif` preprocessor directives.
- Constant macro definitions can be undefined with the `#undef` directive and evaluated as undefined with the `#ifndef` directive.
- Macros can be useful to aid debugging of source code by easily hiding or revealing sections of code.