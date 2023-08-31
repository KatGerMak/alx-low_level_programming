#include "main.h"
int is_prime_rec(int n, int divi);

/**
 * is_prime_rec - check prime recurssively
 * @n: num to check
 * @divi: divisor to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_rec(int n, int divi)
{
	if (n < 2)
		return (0);

	if (divi * divi > n)
		return (1);

	if (n % divi == 0)
		return (0);

	return (is_prime_rec(n, divi + 1));
}

/**
 * is_prime_number - check if prime nuber
 * @n: int tocheck
 * Return: 1 if prime, 0 not prime
 */
int is_prime_number(int n)
{
	return (is_prime_rec(n, 2));
}
