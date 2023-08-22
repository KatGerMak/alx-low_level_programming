#include "main.h"
/**
 * _strlen - return string length
 * @s: pointer to string to check
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
