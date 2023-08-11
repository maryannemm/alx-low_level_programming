#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This program generates a random number and prints the last digit
 * of the number along with its characteristics.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    /* Seed the random number generator with the current time */
    srand(time(NULL));

    /* Generate a random number */
    n = rand();

    /* Get the last digit of n */
    int lastDigit = n % 10;

    /* Print the generated number and its characteristics */
    printf("Last digit of %d is %d", n, lastDigit);

    if (lastDigit > 5)
    {
        printf(" and is greater than 5\n");
    }
    else if (lastDigit == 0)
    {
        printf(" and is 0\n");
    }
    else
    {
        printf(" and is less than 6 and not 0\n");
    }

    return (0);
}

