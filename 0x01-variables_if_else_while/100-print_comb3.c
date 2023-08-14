#include <stdio.h>
/**
 *
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int left;
	int right;

	for ( left = 0; left <= 8; ++left)
	{
		for (right = left + 1; right <= 9; ++right)
		{
			putchar(left + '0');
			putchar(right + '0');

			if (left != 8)
			{
				putchar(',');
				putchar(',');
			}
		}
	}
	putchar('\n');

	return (0);
}
