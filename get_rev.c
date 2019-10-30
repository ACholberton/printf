#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

char *print_revhelp(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);

int print_rev(va_list arg)
{
	int i;
	char *s;
	char *interim;

	s = va_arg(arg, char *);

	if (s == 0)
		return (-1);
	interim = print_revhelp(s);
	if (interim == NULL)
		return (-1);
	i = 0;
	while (interim[i] != '\0')
	{
		putchar2(interim[i]);
		i++;
	}
	free(interim);
	return (i);
}

char *print_revhelp(char *s)
{
	int len = 0;
	int i = 0;
	char *buffer;
	char t;
	int h;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;

	buffer = malloc(sizeof(char)*(len + 1));
	if (buffer == NULL)
		return(NULL);
	_memcpy(buffer, s, len);

	for (h = 0; h < len; h++, len--)
	{
		t = buffer[len - 1];
		buffer[len - 1] = buffer[h];
		buffer[h] = t;
	}
	return (buffer);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i<n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
