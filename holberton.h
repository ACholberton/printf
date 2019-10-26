#ifndef HOLBERTON_H
#define HOLBERTON_H

int putchar2(char c);
int _printf(const char *format, ...);

struct input
{
	char *symbols;
	int (*f)(va_list);
}

#endif
