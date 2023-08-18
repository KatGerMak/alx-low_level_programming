#include "main.h"
/**
 * _isdigit - check if c is a digit
 * @c: int tocheck
 * Return: 1(is digit) 0(not digit)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
