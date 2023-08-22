#include "main.h"
/**
 * print_rev - print string in reverse
 * @*s: pointer to string to print
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = len - 1; 1 >= 0; i--)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
