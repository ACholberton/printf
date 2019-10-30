#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *print_rot13 - this function will encode a string using rot 13
 *@arg: the argument taken
 *Return: string
 */
int print_rot13(va_list arg)
{
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabdcefghijklm";
	int a, b, counter = 0;
	char *str = va_arg(arg, char*);
	int length = 1;

	if (str == NULL)
	{
		return (-1);
	}
	for (a = 0; a < length; a++)
	{
		for (b = 0; rot1[b]; b++)
		{
			if (str[a] == rot1[b])
			{
				str[a] = rot2[b];
				counter++;
				break;
			}
		}
	}
	return (counter);
}
