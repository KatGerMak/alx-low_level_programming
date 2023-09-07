#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: int to allocate to memory
 * Return: pointer to memory
 */
int *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
