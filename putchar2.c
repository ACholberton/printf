#include <unistd.h>

int putchar2(char c)
{
	return (write(1, &c, 1));
}
