#include "main.h"

/**
 * is_prime_recursive - Checks if a number is prime recursively.
 * @n: The number to be checked.
 * @divisor: The current divisor being checked.
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n < 2 || n % divisor == 0)
	{
		return (0);
	}

	if (divisor * divisor > n)
	{
		return (1);
	}

	return (is_prime_recursive(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	return (is_prime_recursive(n, 2));
}
