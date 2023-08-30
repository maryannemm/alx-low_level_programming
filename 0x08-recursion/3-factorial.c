#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which factorial is to be calculated.
 *
 * Return: The factorial of n. If n is negative, return -1.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
