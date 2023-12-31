#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: reversed string
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (; i < len / 2; i++)
	{
		char rev = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = rev;
	}
}
