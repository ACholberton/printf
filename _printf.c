#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *_printf - function will produce output according to format
 *@format: will be the imput entered into the function
 *Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i, j = 0;
	int printedchar = 0;
/* this is our flag, if something is 1, we do something. otherwise no */
	int on = 0;

	print_t opts[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(arg, format);

	while (format != NULL && format[i] != '\0')
	{
                 /* if format looks something like %c or %s */
		if (format[i] == '%' && format[i+1] != '%')
			{
				j = 0;
                        /* while my structure array is not null   */
				while (opts[j].p != NULL)
				{
/* k is our counter for going thru pointers to format*/
/* trying to say that if the letter matches format, give the associated function */
/* p is our pointer to format characters like c, s, i, d, etc */
					if (format[i+1] == opts[j].p[0])
					{
                                            /* flag is on */
/* try to call the matching and associated function in our structure */
						printedchar += opts[j].f(arg);
						on = 1;
						i++;
					}
/* if flag is not on, just print stuff like "hello" */
					if (on == 0)
					{
						putchar2(format[i]);
						printedchar += 1;
					}
				}
			}
/* not sure about placing of %% in nest */
		else if (format[i] == '%' && format[i+1] == '%')
		{
			putchar2('%');
			i++;
			printedchar += 1;
		}
		else
		{
			putchar2(format[i]);
			printedchar += 1;
		}
		i++;

	}
	va_end(arg);

	return (printedchar);
}
