# 6. Employing Functions

This chapter demonstrates how statements can be enclosed within a **function** for execution whenever called by the C program.

## Summary
- Custom functions are declared by stating that function's return data type, then its name followed by parentheses, and ending with a semi-colon.
- Function declarations are also known as **"function prototypes"** and should appear **before** the main function - so the compiler knows of their existence when reading the `main()` function.
- Function definitions, containing the actual statements to be executed when that function is called, should appear **after** the `main()` function block.
- Function declarations may optionally include within their parentheses a comma-separated list of arguments to be passed to the function by its caller, each stating a data type and name.
- Arguments specified in a function definition must match those of its declaration, as these are its formal parameters.
- In C programming arguments are passed by value - so the function operates on a copy of the original value.
- A function may call itself recursively, but must include a statement to modify a tested expression to exit at some point.
- Custom header files have a `.h` file extension.
- The preprocessor directive to `#include` a custom header file *must specify its file name enclosed within double quotes*.
- The `static` keyword can be used in function declarations and definitions to restrict accessibility by reducing their scope to the file in which they appear.
- Larger programs should declare functions as `static` unless there is some specific reason they must be visible outside their file.
- Function prototypes are not required for functions outside the file containing the `main()` function.