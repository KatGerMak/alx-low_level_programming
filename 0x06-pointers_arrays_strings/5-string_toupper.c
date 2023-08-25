#include "main.h"
/**
 * string_toupper - convert lowercase to uppercase
 * @str: string to change
 * Return: changed string pointer
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - 'a' + 'A';
		}

		p++;
	}

	return (str);
}
