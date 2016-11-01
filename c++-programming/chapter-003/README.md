# 3. Making Statements

This chapter demonstrates C++ conditional statements, which allow programs to branch in different directions, and introduces C++ function structures.

## Summary

- An `if` statement evaluates a given test expression for a **boolean** value of `true` or `false`.
- Statements contained in braces after an `if` statement will only be executed when the evaluation is found to be `true`.
- The `if` and `else` keyword are used to perform conditional branching according to the result of a tested expression.
- A `switch` statement is an alternative form of coditional branching that matches a `case` statement to a given value.
- The `for` loop structure has parameters declaring an initializer, a test expression, and an incrementer or decrementer.
- A `while` loop and `do-while` loop must always have an incrementer or decrementer within their loop body.
- Any type of loop can be immediately terminated by including a `break` statement within the loop body.
- A single iteration of any type of loop can be skipped by including a `continue` statement within the loop body.
- Functions are usually declared as prototypes at the start of the program and defined after the **main function**.
- Variables declared in a function are only accessible from within that function as they only have local scope.
- Values can be passed into functions if arguments are declared in the function prototype and definition.
- Overloaded functions have the same name but different number or type of declared arguments.
- Recursive functions repeatedly call themselves until a test condition is met.
- Short function definitions of just one or two statements can be declared in place of a prototype using the `inline` keyword.