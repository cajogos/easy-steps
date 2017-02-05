# 5. Importing Modules

This chapter demonstrates how to use Python modules in your programs.

## Summary

- Functions can be stored in modules that are named as the file name without the **".py"** file extension.
- An `import` statement makes module functions available in a program by dot-suffixing their name after the module name.
- A `from import` statement makes module functions available in a program without the need to dot-suffix their name.
- The `sys` module has attributes that contain the Python version number, interpreter location, and path to search for modules.
- The `keyword` module has a `kwlist` attribute that contains a list of all current Python keywords.
- The `math` modules provides methods to perform mathematical procedures such as `math.ceil()` and `math.floor()`.
- The `random` module provides a `random()` method that produces pseudo random numbers and a `sample()` method that produces a list of elements selected at random from a sequence.
- The `decimal` module provides a `Decimal()` object with which floating-point numbers can be accurately represented to calculate monetary values.
- The `datetime` module provides a `datetime` object with `year`, `month`, `day`, `hour`, `minute`, `second`, `microsecond` attributes that can be referenced by dot-suffixing or with the `getattr()` method.
- A `datetime` object has a `strftime()` method that can specify a directive to return a formatted part of the object.
- The `time` module provides a `time()` method that returns the current elapsed time in seconds since the **Epoch**.
- The `gmtime()` and `localtime()` method return a `struct_time` object that has attributes containing date and time components.
- The `re` module provides a `compile()` method to create a **Regular Expression** pattern and a `match()` method to compare a parrent to a specified string.