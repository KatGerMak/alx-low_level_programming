#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates int array
 * @min: minimum value
 * @max: max value
 * Return: pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
