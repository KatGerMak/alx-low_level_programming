#include "main.h"
/**
 * _strlen_recursion - get string length
 * @s: string to get length of
 * Return: return the length of the string
 */
int _strlen_recursion(char *s)
{
	int len;

	if(*s != '\0')
	{
		len = 1 + _strlen_recursion(s + 1);
	}

	return (len);
}
