#include "main.h"
/**
 * _pow_recursion - get result of x to power of y
 * @x: base value
 * @y: power value
 * Return: result of x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
