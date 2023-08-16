#include "main.h"
/**
 * print_sign - print number sign
 * @n: int to be check
 * Return: 1(if greater than zero) 0(is zero) -1(less than zero)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
			return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
