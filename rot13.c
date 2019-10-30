#include "holberton.h"
/**
 *rot13 - this function will encode a string using rot 13
 *@c:is a string
 *Return: string
 */
char *print_rot13(va_list arg)
{
	int a, b;
	char c = va_arg(arg, char);
	char alpha[2][26] = {{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
			      'k', 'l', 'm', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
			      'H', 'I', 'J', 'K', 'L', 'M'},
			     {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
			      'x', 'y', 'z', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
			      'U', 'V', 'W', 'X', 'Y', 'Z'}};

	if (c == NULL)
	{
		return (NULL);
	}
	for (a = 0; *(c + a) != '\0'; a++)
	{
		for (b = 0; b < 2; b++)
		{
			if (*(c + a) == alpha[b][0])
			{
				*(c + a) = alpha[b][13];
				break;
			}
		}
	}
	return (c);
}
