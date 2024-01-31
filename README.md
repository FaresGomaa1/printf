# Printf Project

This is a simple implementation of the printf function in C, as part of a programming project.

## Project Overview

The goal of this project is to create a custom printf function that handles specific conversion specifiers. The supported conversion specifiers include 'c', 's', '%', 'd', and 'i'.

## Files

- **main.h:** Header file containing function prototypes.
- **_printf.c:** Source file with the implementation of the custom printf function.
- **main.c:** Test file demonstrating the usage of the custom printf function.

## Compilation

Compile your code using the following command:

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o printf