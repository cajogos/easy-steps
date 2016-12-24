# 8. Harnessing Polymorphism

This chapter demonstrates how to separate programs into modular components and introduces the topic of polymorphism - the third principle of C++ Object Oriented Programming.

## Summary

- The three cornerstones of **Object Oriented Programming** are _encapsulation_, _inheritance_, and _polymorphism_.
- Polymorphic entities have a different meaning, or purpose, according to their context.
- A base `class` pointer can be used to call inherited methods in the derived class to which it is bound.
- A base `class` pointer can also be used to explicitly call base class using the `::` scope resolution operator.
- Virtual base `class` methods are intended to be overridden in derived classes.
- Polymorphism allows calls to methods of the same name to be directed to the appropriate overriding method.
- Capability classes generally contain no data but merely declare `virtual` methods that can be overridden in derived classes.
- Virtual methods that return a `-1` value signal an error to indicate they should not be called directly.
- An **Abstract Data Type** represents a concept and is always the base to other classes.
- Declaration of a pure `virtual` method, with the assignation `=0`, indicates that class is an **ADT**.
- Classes can be derived from an **ADT** - but you cannot create an instance of an **ADT**.
- An **ADT** can be derived from another **ADT** to create a complex hierarchy of classes.
- Programs can be separated into _header_, _implementation_, and _client files_ to aid portability and to ease code maintenance.
- Header files that are referenced by `#include` directives will be automatically included by the compiler during compilation.