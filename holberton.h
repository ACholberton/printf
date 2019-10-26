#ifndef HOLBERTON_H
#define HOLBERTON_H

int putchar2(char c, char *s);
int _printf(const char *format, ...);
int _strlen(char *s);

struct input
{
	char *symbols;
	int (*f)(va_list);
}

#endif
