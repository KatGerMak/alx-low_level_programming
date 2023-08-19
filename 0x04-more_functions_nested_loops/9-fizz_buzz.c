#include "main.h"
#include <stdio.h>
/**
 * main - print 1 to 100 replace miltiple of 3 with fizz
 * replace multiples of 5 with buzz, and fizzbuzz for
 * multiples of 5 and 3
 * Return: Always 0(success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf('\n');

	return (0);
}
