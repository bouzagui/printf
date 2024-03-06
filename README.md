# Custom Printf Implementation README

## Description
This project implements a custom version of the `printf` function in the C programming language. The `printf` function is commonly used to print formatted output to the standard output stream. The goal of this project is to replicate the functionality of the standard `printf` function while adding some custom features.

## Files
- `main.h`: Header file containing function prototypes and necessary includes.
- `print_string.c`: Source file containing the implementation of the `print_string` function to print strings.
- `_printf.c`: Source file containing the implementation of the custom `printf` function.
- `_putchar.c`: Source file containing the implementation of the `_putchar` function to write characters to standard output.
- `README.md`: This file providing an overview of the project.
- Other supporting files as needed.

## Features
- The `_printf` function accepts a format string and a variable number of arguments, similar to the standard `printf` function.
- Supports conversion specifiers such as `%c`, `%s`, and `%%`.
- Handles various data types including characters, strings, and integers.
- Custom error handling for edge cases such as `NULL` strings.

## Usage
To use the custom `printf` function, follow these steps:
1. Include the `main.h` header file in your program.
2. Compile your program with the custom `printf` function implementation along with the source files (`print_string.c`, `_printf.c`, `_putchar.c`).
3. Call the `_printf` function with the desired format string and arguments.
4. Run the compiled executable to see the output.
