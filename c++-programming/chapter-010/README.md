# 10. Programming Visually

This chapter brings together elements from previous chapters to build a complete C++ application in a visual programming environment.

## Notes

The following sections of this chapter do not have any commits:
- Testing the program.
- Deploying the application.

> For the final project I had to use **Microsoft Visual Studio 2015 Community** as the previously mentioned **Microsoft Visual C++ Express Edition** seems to no longer be available.

## Summary

* The `<cstdlib>` library provides `rand` and `srand` functions that can be used to generate pseudo-random numbers.
* Unless first seeded by `srand` the `rand` function will generate the same sequence of numbers each time it is called.
* The `time` function provided by the `<ctime>` library can be used to seed `rand` so it appears to generate truly random numbers.
* **Microsoft Visual C++ Express Edition** is a free development environment for **Visual C++** programming.
* A visual program plan should define the program's purpose, required functionality, and interface components needed.
* When a new **Windows Forms Application** projects is created in **Visual C++** an empty **Form** appears in **Form Designer**.
* **Controls** can be dragged from the **Toolbox** and dropped onto an empty **Form**, then arranged to construct the interface.
* The appearance and performance of any control can be modified by changing its properties.
* In visual programming with **Visual C++** the `System` class provides functions to work with graphical controls.
* Statements can be added to the **Form**'s `Load` function block to dynamically initialize control properties.
* Statements can be added to a **Button** control's `Click` function to provide runtime functionality in reponse to user actions.
* Upon completion a program should be tested to ensure it meets all requirements of the program plan.
* The **Release version** of a program is optimized for deployment.
* **Visual C++** applications can run on any machine where the appropriate **.NET Framework** is supported.