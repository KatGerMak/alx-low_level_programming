#include <stdio.h>
#include <stdlib.h>
/**
 * main - print minimum number of coins to make change for money
 * @argc: array size
 * @argv: arrayhggggggggggfgfrdf
 * Return: 0 or 1
 */
int main(int argc, char *argv)
{
	int co, ce;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	ce = atoi(argv[1]);

	if (ce < 0)
	{
		printf("0\n");
		return (0);
	}

	co = 0;

	while (ce > 0)
	{
		if (ce >= 25)
			ce -= 25;
		else if (ce >= 10)
			ce -= 10;
		else if (ce >= 5)
			ce -= 5;
		else if (ce >= 2)
			ce -= 2;
		else
			ce -= 1;

		co++;
	}
	printf("%d\n", co);
	return (0);
}
