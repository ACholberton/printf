#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_printf - function will produce output according to format
 *@format: will be the imput entered into the function
 *Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i, j = 0;
	int printedchar = 0;
/* this is our flag, if something is 1, we do something. otherwise no */
	int on = 0;

	print_t opts[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(arg, format);


}
