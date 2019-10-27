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

int print_int(va_list arg)
{
	int num = 0;
	char LD;
	long rev;

	va_arg(arg, int);

	if (num < 0)
	{
		putchar2('-');
		LD = (char)('0'- (num % 10));
		num /= -10;
	}
	else
	{
		LD = (char)((num % 10) + '0');
	}
	while (num > 0)
	{
		rev = rev * 10 + (num % 10);
		num /= 10;
	}

	while (rev > 0)
	{
		char c = (char)((rev % 10) + '0');
		putchar2(c);
		rev /= 10;
	}
	putchar(LD);
	return (num);
}
