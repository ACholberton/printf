#ifndef HOLBERTON_H
#define HOLBERTON_H

int putchar2(char c);
int _printf(const char *format, ...);
int _strlen(char *s);

int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);

typedef struct options
{
	char *p;
	int (*f)(va_list);
} print_t;

#endif
