#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int print_char(va_list arg)
{
	char c;
	c = va_arg(arg, int);
	putchar2(c);
	return(1);
}

int print_string(va_list arg)
{
	int i = 0;
	char *s;
	s = va_arg(arg, char *);

	if (s == NULL)
	{
/* we hope this works */
/*andres, i am taking out the write */
/*		write(1, "(nil)", 5);   */
		s = "(nil)";
	}
	i = 0;
	while (s[i] != '\0')
	{
		putchar2(s[i]);
		i++;
	}
	return(i);
}
