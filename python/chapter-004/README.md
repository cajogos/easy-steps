# 4. Defining Functions

This chapter demonstrates how to create functions that can be called to execute statements when the program requires them.

## Summary

- Functions are defined using the `def` keyword and contain indented statements to execute when the function gets called.
- Variables with global scope can be referenced from anywhere, but variables with local scope can only be referenced from within the function in which they are declared.
- Arguments are declared as a comma-separated list within the parentheses of a function definition.
- Function calls must supply data for each function argument unless a default value is specified in their declaration.
- Optionally, a function can include a `return` statement to return a value to the caller.
- An anonymous function containing a single expression is created with the `lambda` keyword and returns a function object.
- Callbacks are frequently coded as inline `lambda` expressions embedded directly in a caller's argument list.
- Placeholders can be crafted by inserting the `pass` keyword where a statement is required syntactically.
- A generator function is created when a statement using the `yield` keyword appears in its function block.
- Generator functions retain the state of the function when last called and return a generator object to the caller.
- The built-in `next()` function can be used to continue execution of a generator function from the point where it was frozen.
- Anticipated runtime exception errors can be handled by enclosing statements in a `try` `except` block.
- Optionally, a `finally` statement can be used to specify statements to be executed after exceptions have been handled.
- Error-checking code can be added to scripts using the `assert` keyword to report development errors.