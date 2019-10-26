#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *_printf - function will produce output according to format
 *@format: will be the imput entered into the function
 *Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	if (format == NULL)
	{
		return;
	}
	else
	{
		printf("%s/n", format);
	}
	return (0);
}
