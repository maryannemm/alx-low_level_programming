#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the beginning of the square matrix
 * @size: size of the matrix (number of rows and columns)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum_diag1 = 0, sum_diag2 = 0;
	int i;

	i = 0;
	while (i < size)
	{
		sum_diag1 += a[(size + 1) * i];
		sum_diag2 += a[(size - 1) * (i + 1)];
		i++;
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
