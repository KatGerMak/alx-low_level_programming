#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat -  concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size to check s2
 * Return: NULL or pointer to new mempry
 */
char *string_nconcat(char s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	res = malloc(len1 + n + 1);

	if (res == NULL)
		return (NULL);

	strcpy(res, s1);

	strncat(res, s2, n);

	return (res);
}
