#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

int putchar2(char c);
int _printf(const char *format, ...);
int _strlen(char *s);

/* christine added arg in type */
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);

typedef struct options
{
	char *p;
	int (*f)(va_list);
} print_t;

#endif
