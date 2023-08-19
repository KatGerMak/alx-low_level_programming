#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: always 0(success)
 */
int main(void)
{
	long num;
	long prime;
	long i;

	while (num % 2 == 0)
	{
		prime = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			prime = i;
			num /= i;
		}
	}

	if (num > 2)
	{
		prime = num;
	}

	printf("%ld\n", prime);

	return (0);
}
