# 5. Making Statements

This chapter demonstrates how statements can evaluate expressions to determine the direction in which a C program should proceed.

## Summary
- The `if` keyword performs a basic conditional test to evaluate a given expression for a boolean value of *true* or *false*.
- The `else` keyword can be used to provide alternative statements to execute when an `if` statement evaluates an expression as *false*.
- Offering a program alternative directions in which to proceed following an evaluation is known as **conditional branching**.
- Conditional branching performed by multiple `if else` statements can often be performed more efficiently by a `switch` statement.
- Usually the `case` statements within a switch block must each be terminated by a `break` statement.
- Optionally a `switch` block may contain a `default` statement specifying statements to execute when no match is found.
- The `for` keyword is followed by parentheses specifying an initializer, test-expression, and incrementer to control a loop.
- The `while` keyword is followed by parentheses specifying a test expression to determine whether a loop should continue.
- A `while` loop block must be preceded by an initializer and contain an incremeneter within its statement block.
- The `do` keyword is followed by a statement block after which there must be a `while` statement terminated by a semi-colon.
- A `do while` loop must be preceded by an initializer and contain an incrementer within its statement block.
- Unlike `for` loops and `while` loops the statements in a `do while` loop will always be executed at least once.
- The `break` keyword can be used to terminate a loop, whereas the `continue` keyword can be used to skip a single iteration.
- Loops may be nested and the `goto` keyword can be used to exit to a specified label, although its use is not recommended.