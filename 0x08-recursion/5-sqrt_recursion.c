#include "main.h"
/**
 * sqrt_rec - calc square root recursice
 * @n: number to check
 * @i: int guess
 * Return: the square root, -1 not found
 */
int sqrt_rec(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (sqrt_rec(n, i + 1));
}

/**
 * _sqrt_recursion - get square root of a number
 * @n: number to get square root from
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_rec(n, 0));
}
