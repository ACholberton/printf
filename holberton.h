#ifndef HOLBERTON_H
#define HOLBERTON_H

int putchar2(char c);
int _printf(const char *format, ...);
int _strlen(char *s);

int print_string(va_list);

struct input
{
	char *symbols;
	int (*f)(va_list);
}

#endif
