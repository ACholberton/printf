# _printf Project

## Description

* Write your own printf function called _printf
* This function should produce an output according to format specifiers
* Incorporate variadic functions with structures

## What printf does

* Prints anything that is passed to this function
* Depending on which format specifiers are used, the function will print the \
value of the variable
* Format specifiers start with the '%' character; the format specifier indicates \
where along with how s piece of data will \
be translated into characters.

---

## Requirements:

* Create your own header file named
``` holnerton.h ```.
* Specific compilation flag: gcc -Wall -Werror -Wextra -pedantic *.c
* Authorized functions and macros: { write, malloc, free, va_start, va_end, va_copy, va_arg }

---
## Uses

* Compile all created source code .c files in this repository along with the
header
```holberton.h```
file.

Example ```main.c```:
```
int main (void)
{
	_printf("Welcome to our project.\n");

return (0);
}
```

---
## Available Format Specifiers


| Format Specifiers |
--- | --- |
%c | a single character
%s | a string
%i | an integer
%d | a decimal integer
%u | an unsigned integer
%% | a percent character

---

## Author

* **Andres Cheung** - [ACholberton](https://github.com/ACholberton)
* **Christine Pang** - [christinepang1](https://github.com/christinepang1)