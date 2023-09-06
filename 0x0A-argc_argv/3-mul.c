#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: array size
 * @argv: array
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int n1, n2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	res = n1 * n2;

	printf("%d\n", res);

	return (0);
}
