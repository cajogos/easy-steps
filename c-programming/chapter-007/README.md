# 7. Pointing to data

This chapter demonstrates how data in a C program can be referenced by pointing to the machine address at which it is stored.

## Summary
- A pointer is a variable that stores the memory address of another variable expressed in hexadecimal.
- The `*` dereference operator is used to reference the valued contained in the variable to which the pointer points.
- In a pointer variable declarations the variable name is prefixed by the `*` character to denote that the variable will be a pointer.
- A pointer variable can be assigned the address of another variable using the `&` *addressof* operator.
- Pointer arithmetic allows a pointer to move between consecutive memory places and is especially useful for moving between array elements.
- When an integer variable array name is assigned to a pointer that pointer automatically stores the memory address of the first element of the array.
- Pointers can be passed as arguments to other functions.
- Passing a pointer as a function arguments passes by reference, allowing that function to operate on the original value.
- Each element in an array of pointers can store the address of another variable.
- An array of pointers is especially useful for handling strings of characters.
- When a character string variable array name is assigned to a pointer that pointer automatically stores the entire string.
- A pointer to a function must always be enclosed within parentheses when using the `*` dereference operator to avoid compile errors.
- Dereferencing a function pointer calls the function to which it points and passes any arguments specified to the pointer.