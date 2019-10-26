#include <unistd.h>

int _strlen(char *s)
{
	int i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

int putchar2(char c, char *s)
{
	int i = 0;
	i = _strlen(s);
	return (write(1, &c, i));
}
