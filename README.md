# printf project

## Description

This project aims to implement a simplified version of the `printf` function in the C programming language. The custom `printf` function will be capable of formatting and printing data to the standard output.

## Table of Contents

- [Features](#features)
- [Usage](#usage)
- [Supported Format Specifiers](#supported-format-specifiers)
- [Examples](#examples)
- [File Structure](#file-structure)
- [How to Compile](#how-to-compile)
- [Coding Style](#coding-style)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)

## Features

- Implement a custom `printf` function.
- Support a variety of format specifiers.

## Usage

```c
#include "main.h"

int main(void) {
    _printf("Hello, %s!\n", "World");
    return 0;
}
```
## Supported Format Specifiers
%c: Character
%s: String
%d: Integer (base 10)
%i: Integer (base 10)
%u: Unsigned Integer
%x: Unsigned Integer (hexadecimal)
%X: Unsigned Integer (hexadecimal, uppercase)
%o: Unsigned Integer (octal)
%b: Binary
(Note: Add more format specifiers as needed for your implementation)

Examples
```c
_printf("Hello, %s! This is a number: %d\n", "World", 42);
```
## File Structure
main.c: Main program file with example usage.
main.h: Header file with function prototypes.

## How to Compile
Compile the program using the provided compilation options:
```c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o your_executable_name
```
## Coding Style
The code follows the Betty style guide. Use the provided betty-style.pl and betty-doc.pl scripts for style checking.

## Testing
Testing can be performed using the provided main.c files. However, the main.c files included in this repository may differ from the examples.

## Contributing
Feel free to contribute to this project by opening issues or submitting pull requests.

## License
This project is licensed under the MIT License.

