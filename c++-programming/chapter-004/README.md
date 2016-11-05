# 4. Handling Strings

This chapter demonstrates how to manipulate C++ text strings as a simpler, more powerful, alternative to character arrays.

## Summary

- The **C++** `<string>` library provides a _"string"_ object that emulates a data type - so that `string` variables can be created.
- Arithmetic cannot be performed on numeric values assigned to `string` variables until they are converted to a numeric data types.
- The standard `cin` function reads from standard input until it encounters a space, so can be used to input a single word, and provides an `ignore()` function to disregard the input buffer.
- The `getline()` function reads from standard input until it encounters a newline, so can be used to input a string of text.
- The **C++** `<sstream>` library provides a _"stringstream"_ object that acts an intermediary to convert strings to other data types.
- A `string` variable can be emptied by assigning it an empty `string` (`= ""`) or by calling its `clear()` function.
- Features of a `string` variable can be revealed by calling its `size()`, `capacity()`, and `empty()` functions.
- Multiple `string` values can be concatenated by the `+` operator.
- A `string` can be appended to another `string` by the `+=` operator or by calling its `append()` function.
- A `string` can be compared to another `string` by the `==` operator or by calling its `compare()` function.
- A `string` value can be assigned to a `string` variable using the `=` operator or by calling its `assign()` function.
- The `swap()` function swaps the values of two `string` variables.
- Substrings of a `string` can be sought with the `find()` function, or specialized functions such as `find_first_of()`, and a character retrieved from a specifed index position by the `at()` function.
- A substring can be added to a `string` by its `insert()` function, removed by its `erase()` function, replaced by its `replace()` function, or copied by its `substr()` function.