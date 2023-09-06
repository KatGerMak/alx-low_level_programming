#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * is_space - checks for space
 * @c: string to check
 * Return: int true or false
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - helper to count words in string
 * @str: string to check
 * Return: count
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_space(*str))
		{
			if (in_word)
			{
				in_word = 0;
				count++;
			}
		}
		else
		{
			in_word = 1;
		}
		str++;
	}

	if (in_word)
		count++;

	return count;
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: NULL or pointer to array of words
 */
char **strtow(char *str)
{
	int num_words, len, i, j;
	char **result;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);

	if (num_words == 0)
		return (NULL);

	result = malloc(sizeof(char *) * (num_words + 1));

	if (result == NULL)
		return (NULL);

	len = 0;
	i = 0;

	while (*str)
	{
		if (!is_space(*str))
		{
			len++;
		}
		else if (len > 0)
		{
			result[i] = malloc(sizeof(char) * (len + 1));

			if (result[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(result[i]);
				free(result);
				return (NULL);
			}
			for (j = 0; j < len; j++)
				result[i][j] = *(str - len +j);

			result[i][len] = '\0';

			len = 0;
			i++;
		}
		str++;
	}

	if (len > 0)
	{
		result[i] = malloc(sizeof(char) * (len +1));

		if (result[i] == NULL)
		{
			for  (j = 0; j <= i; j++)
				free(result[i]);
			free(result);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			result[i][j] = *(str - len + 1);

		result[i][len] = '\0';
	}

	result[num_words] = (NULL);
	return (result);
}
