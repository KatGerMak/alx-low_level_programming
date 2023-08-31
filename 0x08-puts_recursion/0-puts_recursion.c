#include "main.h"
/**
 * _puts_recursion - puts using resursion
 * @s: string to put
 */
void _pputs_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}
	else
	{
		_putchar('\n'):
	}
}
