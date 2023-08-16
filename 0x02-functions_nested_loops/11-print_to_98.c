#include "main.h"
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: number to start from
 */
void print_to_98(int n)
{
	int i, j;

	if(n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if(i != 98)
			{
				printf("%d,", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			if(j != 98)
			{
				printf("%d,", j);
			}
			else
			{
				printf("%d\n", j);
			}
}
