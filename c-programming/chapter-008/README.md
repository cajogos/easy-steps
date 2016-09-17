# 8. Manipulating Strings

This chapter demonstrates how strings of text may be manipulated in C programs.

## Summary
- In C programming a string is an array of characters that has the special `\0` null character in its final statement.
- Each character also has a numerical ASCII code value.
- A character array name acts like a pointer to the entire string.
- The `scanf()` function stops reading input at the first space character it encounters, but the `gets()` function accepts spaces and automatically adds a final `\0` null character.
- The `puts()` function outputs a string specified as its argument and automatically adds a newline at the end of the string.
- Special string-handling functions are available from the standard **C** library **string.h** header file, such as the `strlen()` function that returns the length of a specified string, or the `strcpy()` and `strncpy()` functions that can copy strings.
- The **string.h** header file also provides the `strcat()` and `strncat()` functions, which can be used to concatenate strings together.
- Additionally, **string.h** provides the `strstr()` function that searches a string for a specified substring, and the `strcmp()` function that compares two specified strings.
- When `strstr()` fails to find the substring it seeks the function returns a value of `NULL`.
- The standard **C** library **ctype.h** header file provides functions to test character types, such as `isalpha()`, `isdigit()` and `ispunc()`.
- The **ctype.h** header file also provides `islower()`, `isupper()` and `tolower()`, `toupper()` functions that test and set character case.
- The standard library **stdlib.h** header file provides the `atoi()` function that can convert a string to an integer.
- The standard library **stdlib.h** header file provides the `sprintf()` function that can convert an integer to a string, in much the same way as the more powerful non-standard `itoa()` function.