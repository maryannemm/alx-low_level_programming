#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an integer array, followed by a new line.
 * @a: Pointer to the integer array.
 * @n: Number of elements to print.
 */
void print_array(int *a, int n)
{
    int i = 0;

    if (n > 0)
    {
        printf("%d", a[i]);
        n--;

        while (n > 0)
        {
            i++;
            printf(", %d", a[i]);
            n--;
        }
    }

    printf("\n");
}
