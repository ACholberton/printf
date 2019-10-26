#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <stdarg.h>
/**
 *_printf - function will produce output according to format
 *@format: will be the imput entered into the function
 *Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int a = 0;
	va_list argument;

	va_start(argument, format);

	while (format[a])
	{
		switch (format[a])
		{
		case 's': s = va_arg(argument, char *);
			putchar2('s');
			break;
		case 'c': c = va_arg(argument, char);
			putchar2('c');
			break;
		case '%': % = va_arg(argument, double);
			putchar2('%');
			break;
		}
		a++;
	}
	va_end(argument);
	return (a);
}
