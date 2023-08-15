#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued Fibonacci terms
 *        that do not exceed 4,000,000.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int fib1 = 1, fib2 = 2, nextFib;
	long int sum = 2; // Start with 2 since the second term is even

	while (1)
	{
		nextFib = fib1 + fib2;
		if (nextFib > 4000000)
			break;

		if (nextFib % 2 == 0)
			sum += nextFib;

		fib1 = fib2;
		fib2 = nextFib;
	}

	printf("%ld\n", sum);

	return (0);
}
