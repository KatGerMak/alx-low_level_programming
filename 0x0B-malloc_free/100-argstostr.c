#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: k
 * @av: pointer
 * Return: pointer to new string or NULL(failure)
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *str;
	int len;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 1;

	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	str[0] = '\0';

	for (i = 0; i < ac; i++)
	{
		strcat(str, av[i]);
		strcat(str, "\n");
	}

	return (str);
}
