# 5. Reading and Writing Files

This chapter demonstrates how to store and retrieve data in text files, and illustrates how to avoid errors in C++ programs.

## Summary

- The **C++** `<fstream>` library provides functions for working with files as `ifstream` input or `ofstream` output stream objects.
- Upon completion a stream's `close()` function should be called.
- File modes can be used to control the behaviour of a stream.
- An input stream's `get()` function reads one character at a time.
- The `getline()` function can be used to read a line at a time from an input stream.
- Optionally, the `getline()` function can have a third argument specifying a delimiter character at which to stop reading.
- Insertion operators can be used with the `cin` and `cout` functions to modify their behaviour.
- The `cout.width()` function sets the width of the output stream.
- The `cout.fill()` function specifies a character to occupy any empty portion of the output.
- The `cout.precision()` function determines how many decimal places to display when the output is a floating point number.
- A badly performing program may contain syntax errors, logic errors, or exception errors.
- A `try` block can be used to enclose statements that, under certain conditions, may cause an exception error.
- A `catch` block can be used to handle exception errors produced in its associated `try` block.
- Exception errors that occur in a `try` block are automatically thrown to the associated `catch` block, or can be manually thrown using the `throw()` function.
- The **C++** `<stdexcept>` library defines a number of exception classes that categorize common exceptions, and the `<typeinfo>` library provides exception type information.