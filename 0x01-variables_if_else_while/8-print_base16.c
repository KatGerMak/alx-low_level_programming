#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (i = 9; i <= 15; i++)
	{
		putchar(i + 'a');
	}

	putchar('\n');

	returrn (0);
}
