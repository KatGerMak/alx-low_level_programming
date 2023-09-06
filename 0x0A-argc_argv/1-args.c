#include <stdio.h>
/**
 * main - print args
 * @argc: size array
 * @argv: array of argss
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
