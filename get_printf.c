#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

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
		write(1, "(nil)", 6);
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
	int num = va_arg(arg, int);;
	char LD;
	long rev;
	char c;
	rev = 0;

	va_arg(arg, int);

	if (num < 0)
	{
		putchar2('-');
		num = -num;
	}
	if (num > 0)
	{
		LD = (char)((num % 10) + '0');
		rev = rev * 10 + (num % 10);
		num /= 10;


		c = (char)((rev % 10) + '0');
		putchar2(c);
		rev /= 10;
	}
	putchar(LD);
	return (num);
}
