# 9. Building Interfaces

This chapter demonstrates how to create graphical windowed applications with Python.

## Summary

- The `tkinter` module can be imported into a Python program to provide attributes and methods for windowed applications.
- Every `tkinter` program must begin by calling `Tk()` to create a window and call its `mainloop()` method to capture events.
- The window object's title is specified by its `title()` method.
- A label widget is created by specifying the name of its parent container and its text as arguments to the `Label()` constructor.
- Widgets can be added to an application using the `pack()`, `grid()` or `place()` geometry managers.
- A button widget is created by specifying the name of its parent container, its text, and the name of a function to call when the user pushes it, as arguments to the `Button()` constructor.
- The `tkinter.messagebox` module can be imported into a Python program to provide attributes and methods for message boxes.
- Message boxes that ask the user to make a choice return a value to the program for conditional branching.
- The `Frame()` constructor creates a container in which multiple widgets can be grouped for better positioning.
- The `Entry()` constructor creates a single line text field whose current contents can be retrieved by its `get()` method.
- Items are added to a `Listbox` object by its `insert()` method and retrieved by specifying their index number to its `get()` method.
- `Radiobutton` and `Checkbutton` objects store values in the `StringVar` or `IntVar` object nominated by their `variable` attribute.
- The `PhotoImage()` constructor creates an image object that has a `subsample()` method which can scale down the image.
- Images can be added to `Button` and `Label` objects, embedded in `Text` objects, and painted on `Canvas` objects.