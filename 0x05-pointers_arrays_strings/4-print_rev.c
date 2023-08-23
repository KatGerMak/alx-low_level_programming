#include "main.h"
#include <stdio.h>
/**
 * print_rev - print string in reverse
 * @s: pointer to string to print
 */
void print_rev(char *s)
{
	int i;

	i = strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	/*
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; 1 >= 0; i--)
	{
		_putchar(s[i]);
	}*/

	_putchar('\n');
}
