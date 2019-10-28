#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

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
	int on = 0;

	print_t opts[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
/*	*	{"d", print_dec},*/
		{NULL, NULL}
	};

	va_start(arg, format);
/* DO NOT DELETE THIS I = 0; IT IS VERY IMPORTANT */
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i+1] != '%')
			{
				j = 0;
				while (opts[j].f != NULL)
				{
					if (format[i+1] == opts[j].p[0])
					{
						printedchar += opts[j].f(arg);
						on = 1;
						i++;
					}
					j++;
				}
				if (on == 0)
					{
						putchar2(format[i]);
						printedchar += 1;
					}
			}
		else if (format[i] == '%' && format[i+1] == '%')
		{
			putchar2('%');
			i++;
			printedchar += 1;
		}
		else
		{
			putchar2(format[i]);
			printedchar += 1;
		}
		i++;
	}
	va_end(arg);

	return (printedchar);
}
