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
	int len = 1;
	int base = 10;
	int n = va_arg(arg, int);
	int temp, i = 0;

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n > 0)
	{
		while (n/base != 0)
		{
			base = base*10;
			len++;
		}
		for(i = 0; i < len; i++)
		{
			temp = 0;
			temp = n/10^(len - 1 - i);
			temp = temp % 10;
			putchar(temp + '0');
		}
	}
	return(len);

}
