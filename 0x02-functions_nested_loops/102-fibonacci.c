#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int fib1 = 1, fib2 = 2, nextFib;
	int count;

	printf("%ld, %ld", fib1, fib2);

	for (count = 2; count < 50; count++)
	{
		nextFib = fib1 + fib2;
		printf(", %ld", nextFib);

		fib1 = fib2;
		fib2 = nextFib;
	}

	printf("\n");

	return (0);
}
