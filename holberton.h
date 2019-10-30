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
int print_int(va_list arg);
int print_dec(va_list arg);
int print_rev(va_list arg);
int print_unsign(va_list arg);

int print_rot13(va_list arg);
void print_i(int i);
void printrev_help(char *s);

char *print_revhelp(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 *struct options - are the options that printf will take
 *@p: argument
 *@f: argument
 */
typedef struct options
{
	char *p;
	int (*f)(va_list);
} print_t;

#endif
