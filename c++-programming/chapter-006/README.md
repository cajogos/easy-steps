# 6. Pointing to Data

This chapter demonstrates how to produce efficient C++ programs utilizing pointers and references.

## Summary

- Data is stored in computer memory within sequentially numbered addresses.
- Operands to the left of an `=` operator are **L-values**, and those to its right are **R-values**.
- An **R-value** may only appear to the right of an `=` operator.
- A pointer is a variable that stores the memory address of another variable - that to which it points.
- The `*` character appears as an **L-value** in a pointer declaration indicating that the statement will create a pointer variable.
- Once declared, the `*` dereference operator can be used to reference the value within a variable to which a pointer points.
- Pointer arithmetic can be used to iterate through the values stored in array elements.
- A variable is passed to a function by value, whereas pointers and references are passed by reference.
- Passing by reference allows the receiving function to directly manipulate variables declared within the calling functions.
- A string value can be assigned to a pointer of the `char` data type, and the whole string retrieved using the pointer name.
- Each element in a pointer array can store data or a pointer.
- A reference is not a variable, but merely an alias for a variable.
- The `&` character appears as an **L-value** in a reference declaration indicating that the statement will create an alias.
- The `&` reference operator can be used to reference the memory address stored within a pointer.
- References are easier to use than pointers but, unlike pointers, a reference must always be initialized in its declaration and can never be assigned a different variable.