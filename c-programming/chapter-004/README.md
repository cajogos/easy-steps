# 4. Performing Operations

This chapter demonstrates how the C operators are used to manipulate data within a C program.

## Summary
- Arithmetical operators can form expressions with two operands for addition `+`, subtraction `-`, multiplication `*`, division `/`, and modulus `%`.
- Increment `++` and decrement `--` operators modify a single operand by a value of one.
- The assignment `=` operator can be combined with an arithmetical operator to perform an arithmetical calculation then assign its result.
- Comparison operators can form expressions comparing two operands for equality `==`, inequality `!=`, greater `>`, `<` lesser, greater or equal `>=`, and lesser or equal `<=` values.
- Logical **AND** `&&` and **OR** `||` operators form expressions evaluating two operands to return a boolean value of **true** or **false**, but the logical **NOT** `!` operator returns the inverse boolean value of a single operand.
- A conditional `?:` operator evaluates a given boolean expression then returns one of two operands depending on its result.
- The `sizeof` operator returns the memory byte size of a data type or a data object.
- A single memory byte comprises eight bits, which may each contain a value of *one* (`1`) or *zero* (`0`).
- Bitwise operators **OR** `|`, **AND** `&`, **NOT** `~`, and **XOR** `^` each return a value after comparison of the values within two bits, whereas the **Shift Left** `<<` and **Shift Right** `>>` operators move the bit values a specified number of bits in their direction.
- The most common use of bitwise operators is to manipulate a compact bit field containing a set of boolean flags.
- Expressions containing multiple operators will execute their operations in accordance with the default precedence rules unless explicitly determined by the addition of parentheses.