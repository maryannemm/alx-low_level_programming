#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This program generates a random number and prints whether
 * it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    /* Seed the random number generator with the current time */
    srand(time(NULL));

    /* Generate a random number between -100 and 100 */
    n = rand() % 201 - 100;

    /* Print the generated number */
    printf("The number: %d\n", n);

    /* Check if the number is positive, negative, or zero */
    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }

    return (0);
}

