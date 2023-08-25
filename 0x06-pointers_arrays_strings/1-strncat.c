#include "main.h"
/**
 * _strncat - Concatenates n bytes of one string to another
 * @dest: destination string
 * @src: string to combine with dest
 * @n: max number of bytes to from src
 * Return: A result string pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
		p++;

	while (*src != '\0' && n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}

	*p = '\0';

	return (dest);
}
