#include <stdio.h>
/**
 * main - print program name
 * @argc: array size
 * @argv: array
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}

	return (1);
}
