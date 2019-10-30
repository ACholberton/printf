#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *rot13 - this function will encode a string using rot 13
 *@c:is a string
 *Return: string
 */
char *print_rot13(va_list arg)
{
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabdcefghijklm";
	int a, b;
	char *str = va_arg(arg, char*);
	int length = 1;

	for (a = 0; a < length; a++)
	{
		for (b = 0; rot1[b]; b++)
		{
			if (str[a] == rot1[b])
			{
				str[a] = rot2[b];
				break;
			}
		}
	}
	return(str);
}
