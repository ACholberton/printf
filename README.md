# _printf Project

## Description

* Write your own printf function called _printf
* This function should produce an output according to format specifiers
* This output will be displayed on the standard output

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
Output:
```
$
$ Welcome to our project.
$
```

---
## Available Format Specifiers


| Format Specifiers | Description |
--- | --- |
%c | a single character
%s | a string
%i | an integer
%d | a decimal integer
%u | an unsigned integer
%% | a percent character
%r | prints a string in reverse

---
```%c```:
```
int main (void)
{
	char c = A;
	_printf("%c\n", c);

	return (0);
}
```
Output:
```
$
$ A
$
```
---

```%s```:
```
int main (void)
{
	_printf("%s\n", Smile!);

	return (0);
}
```
Output:
```
$
$ Smile!
$
```
---

```%i```:
```
int main (void)
{
	_printf("%i\n", 23);

	return (0);
}
```
Output:
```
$
$ 23
$
```

---

```%d```:
```
int main (void)
{
	_printf("%d\n", 2.3);

	return (0);
}
```
Output:
```
$
$ 2.3
$
```
___

```%u```:
```
int main (void)
{
	_printf("%u\n", 7235);

	return (0);
}
```
Output:
```
$
$ 7235
$
```
---
```%%```:
```
int main (void)
{
	_printf("%%\n");

	return (0);
}
```
Output:
```
$
$ %%
$
```
---
```%r```:
```
int main (void)
{
	_printf("%r\n", \nHello);

	return (0);
}
```
Output:
```
$
$ olleH
$
```

---

## Author

* **Andres Cheung** - [ACholberton](https://github.com/ACholberton)
* **Christine Pang** - [christinepang1](https://github.com/christinepang1)