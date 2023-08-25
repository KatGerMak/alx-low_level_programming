#include "main.h"
/**
 * leet - encode a string
 * @s: string
 * return: encoded string
 */
char *leet(char *s)
{
	char *p = s;
	char *let_chars = "aAeEoOtTlL";
	char *leet_replace = "4433007711";
	int i;

	for (; *p != '\0'; p++)
	{
		for (i = 0; leet_chars[i] != '\0'; i++)
		{
			if (*p == leet_chars[i])
			{
				*p = leet_replace[i];
				break;
			}
		}
	}

	return (str);
}
