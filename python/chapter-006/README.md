# 6. Managing Strings

This chapter demonstrates how to work with string data values and text files in Python programs.

## Summary

- Strings can be manipulated by operators for concatenation `+`, selecting slices `[]`, and membership with `in` and `not in`.
- The special `__doc__` attribute can contain a **"docstring"** describing a module, function, class or method.
- Python's built-in `dir()` function can be useful to examine the names of functions and variables defined in a module.
- The `__builtins__` module contains functions and variables that are available by default, such as the `print()` function.
- A `str` object has a `format()` method for string formatting and many methods for string modification, such as `capitalize()`.
- Unicode character encoding is used by default but this can be changed with the `str` object's `encode()` and `decode()` methods.
- The `unicodedata` module provides a `name()` method that reveals the Unicode name of each character.
- A file object has `open()`, `read()`, `write()`, and `close()` methods for working with files, and features that describe file properties.
- The `open()` method must specify a file name string argument and a file mode string argument, such as **'r'** to read the file.
- Position in a file, at which to read or write, can be specified with the `seek()` method and reported by the `tell()` method.
- The Python `with` keyword groups file operational statements within a block and automatically closes an open file.
- The process of **"pickling"** objects stores a string representation of an object that can later be **"unpickled"** to its former state.
- A `pickle` object's `dump()`  method requires arguments to specify an object for conversion and a file name in which to store data.
- Stored object data can be retrieved by specifying the file name in which it is stored to the `pickle` object's `load()` method.