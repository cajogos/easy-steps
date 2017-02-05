# 7. Programming Objects

This chapter demonstrates how to use Python for Object Oriented Programming.

## Summary

- A `class` is a data structure prototype describing object properties with its methods and attribute members.
- Each `class` declaration begins with the `class` keyword and is followed by an indented code block that may contain a `class` document string, `class` variables, and class methods.
- Class variables have global scope but instance variables (declared within method definitions) have only local scope.
- Instance variables encapsulate data securely in a `class` structure and are initialized when a class instance is created.
- Properties of a `class` are referenced by dot notation and are addressed internally using the `self` prefix.
- A `class` instance is a copy of the prototype that automatically calls its `__init__()` method when the instance is first created.
- An attribute of a `class` can be added, modified, or removed using dot notation or manipulated using the built-in functions `getattr()`, `hasattr()`, `setattr()`, and `delattr()`.
- The name of attributes automatically supplied by Python begin with an underscore character to notionally indicate privacy.
- The built-in `__dict__` attribute contains a namespace dictionary of `class` components keys and values.
- Python automatically performs garbage collection but the `del` keyword can remove objects and call the `class` destructor.
- A derived `class` inherits the method and attribute members of the parent base `class` from which it is derived.
- A method of a derived `class` can override a matching method of the same name in its parent base class.
- Python is a duck-typed language that support polymorphism for like-named methods of multiple classes.