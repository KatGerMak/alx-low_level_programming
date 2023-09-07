#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * of elements and initializes the memory to zero
 * @nmemb: array
 * @size: size of array
 * Return: NULL or pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	memset(mem, 0, nmemb * size);
	return (mem);
}
