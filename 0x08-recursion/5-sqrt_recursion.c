#include "main.h"

/**
 * calculate_sqrt - Calculates the square root of a number using recursion.
 * @n: The number for which the square root is to be calculated.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n.
 */
int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}

	if (guess * guess > n)
	{
		return (-1);
	}

	return (calculate_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which the square root is to be calculated.
 *
 * Return: The natural square root of n. If n doesn't have a natural square root, return -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (calculate_sqrt(n, 0));
}
