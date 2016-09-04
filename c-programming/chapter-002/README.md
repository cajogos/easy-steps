# 2. Storing Variable Values

## Summary
- Variable is a container in a C program in which a data value can be stored in computer memory.
- Variable names must adhere to the C naming conventions.
- The four basic data types in C are `char`, `int`, `float` and `double`.
- Format specifiers `%d`, `%f`, `%c`, `%s` and `%p` can be used with the `printf()` function to display variable values of different types.
- User input can be assigned to variables by the `scanf()` functions.
- The permissible rand of `int` variables can be explicity qualified using the `short` and `long` keywords.
- Variables that will never hold negative values may be qualified as `unsigned` to extend their positive range.
- The number of memory bytes reserved by any variable can be revealed using the `sizeof` operator.
- Variable scope describes the extent of accessibility to a variable and may be local or global.
- The `extern` keyword specifies an externally defined variable and the `static` keyword limits accessibility to the same source file.
- Performance of heavily used variables may be improved using the `register` keyword to place the variable in a machine register.
- Variables unsuitable for registers can be marked as `volatile`.
- The compiler may implicitly change data types where that is logical, or they may be changed explicitly by casting.
- Array variables store multiple items of data within individual elements that are sequentially numbered - starting at zero.
- Values in array elements are referenced by the array variable name followed by their element number within square brackets.
- Array variables can have multiple indices to create multi-dimensional arrays.