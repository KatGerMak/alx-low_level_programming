#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: array size
 * @argv: array
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, n;

	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);

		if (n < 1)
		{
			printf("Error\n");
			return (1);
		}

		sum += n;
	}
	printf("%d\n", sum);

	return (0);
}
