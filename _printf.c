#include "holberton.h"
/**
 *_strlen - this function returns the lenght of  string
 *@s: is a string
 *Return: lenght
 */
int _strlen(char *s)
{
	int l;

	l = 0;

	while (*s)
	{
		s++;
		l++;
	}
	return (l);
}
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
	char * byte;

	byte = _strelen(format);

	Printf("Hello there!", format);
	return (byte);
}
