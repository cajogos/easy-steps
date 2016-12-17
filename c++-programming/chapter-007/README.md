# 7. Creating Classes and Objects

This chapter introduces the topics on ecapsulation and inheritance - the first two principles of C++ Object Oriented Programming.

## Summary

- The first principle of Object Oriented Programming is the encapsulation of data and functionality within a single class.
- Access specifiers `public`, `private` and `protected` control the accessibility of class members from outside the class.
- A class declaration describes a data structure from which instance objects can be created.
- Public setter and getter class methods store and retrieve data from private class variable members.
- The scope resolution operator `::` can explicity identify a class.
- Class members that have the same name as a passed argument can be explicity identified by the `this->` pointer.
- A constructor method is called when an object gets created and a destructor method is called when it gets destroyed.
- Class variables can be automatically initialized by a constructor.
- Class methods can be overloaded like other functions.
- The second principle of Object Oriented Programming is the virtue of inheritance that allows derived classes to inherit the properties of their parent base class.
- When an instance object of a derived class is created the default constructor of the base class gets called in addition to the constructor of the derived class.
- A derived class method can override a matching method in its base class - also overriding all overloaded methods of that name within the base class.