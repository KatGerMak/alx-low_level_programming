#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _str - a pointer to a new string which is a duplicate of the string str
 * @str: string to duplicate
 * Return: NULL if string is null or pointer to new string
 */
char *_strdup(char *str);
{
	int len = 0;
	int i;
	char *dup;

	if (str = NULL)
		return (NULL);

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
