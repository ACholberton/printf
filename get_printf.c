#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
 *print_char -  will print a char
 *@arg: is the argument imputed
 *Return: 1
 */
int print_char(va_list arg)
{
	char c;
	if (arg == NULL)
	{
		return (-1);
	}
	c = va_arg(arg, int);

	putchar2(c);
	return (1);
}
/**
 *print_string - will print a string
 *@arg: is the imput
 *Return: index
 */
int print_string(va_list arg)
{
	int i = 0;
	char *s;

	if (arg == NULL)
	{
		return (-1);
	}
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
	return (i);
}
/**
 *print_int - will print an integer and decimal
 *@arg: is the imput
 *Return: 0
 */
int print_int(va_list arg)
{
	int len = 1;
	int n = va_arg(arg, int);
	int temp;
	int place;
	int count = 0;

	if (n < 0)
	{
		putchar2('-');
		n = -n;
		count++;
	}
	else
	{
		n = n;
	}
	temp = n;
	place = 0;
	while (temp > 0)
	{
		temp = temp/ 10;
		place++;
	}
	len = 1;
	while (place > 1)
	{
		len = len *10;
		place--;
	}
	while (len > 0)
	{
		putchar2(n/len % 10 + '0');
		count++;
		len = len/ 10;
	}
	return(count);
}
