#include "main.h"
/**
 * _puts_recursion - puts using resursion
 * @s: string to put
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
