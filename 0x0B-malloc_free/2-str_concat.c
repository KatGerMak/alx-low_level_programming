#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL(failure) or pointer to new memory stoting the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *constr;
	int len1 = 0;
	int len2 = 0;
	int i;

	if (s2 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	constr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (constr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		constr[i] = s1[i];
	for (i = 0; i < len2; i++)
		constr[len1 + i] = s2[i];

	constr[len1 + len2] = '\0';

	return (constr);
}
