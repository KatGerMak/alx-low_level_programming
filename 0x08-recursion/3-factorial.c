#include "main.h"
/**
 * factorial - get factorial of the number
 * @n: number to get factorial from
 * Return: factorial result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	
	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
