# 9. Building Structures

This chapter introduces the **"struct"** structure and **"union"** abstract data types and demonstrates how they can be used in C programs to group together multiple variables of different type.

## Summary
- A `struct` can contain one or more variables of any data type, which are known as `struct` members.
- Each `struct` memeber can be referenced by appending its name to a tag name with the `.` dot operator.
- Further instances of a `struct` will inherit the member properties of the original from which they are derived.
- The `struct` keyword may be preceded by the `typedef` keyword to declare the struct to be a data type.
- It is helpful to capitalize tag names to readily identify structure-defined data types.
- Variable declarations may optionally initialize each `struct` member by assigning a comma-separated list of values.
- A pointer to a `struct` holds the memory address of the beginning of the region of memory used to store member data.
- In a struct pointer the `.` dot operator can be replaced by the `->` arrow operator.
- The members in an array of structures may, opitionally, be initialized in the declaration - but each list of member values must be enclosed within a pair of braces.
- A `struct` may be passed as an argument to a function just like any other variable.
- Passing a `struct` variable to a function means it will operate on a copy of the `struct` members but passing a `struct` pointer variable means the function operates on the original members.
- A `union` is like a `struct` in which different pieces of data are stored at the same memory location as the program proceeds.
- The standard **C** library **stdlib.h** header file provides the `malloc()`, `calloc()` and `realloc()` functions, which can allocate memory, and the `free()` function to release allocated memory.