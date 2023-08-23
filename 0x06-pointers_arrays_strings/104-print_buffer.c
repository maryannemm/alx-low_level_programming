#include <stdio.h>
#include "main.h"

/**
 * print_buffer - Prints the content of a buffer.
 * @b: The buffer to be printed.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
    int i = 0;
    int j;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    while (i < size)
    {
        printf("%08x: ", i);

        j = 0;
        while (j < 10)
        {
            if (i + j < size)
                printf("%02x", (unsigned char)b[i + j]);
            else
                printf("  ");

            if (j % 2 == 1)
                printf(" ");

            j++;
        }

        j = 0;
        while (j < 10)
        {
            if (i + j < size)
            {
                if (b[i + j] >= 32 && b[i + j] <= 126)
                    printf("%c", b[i + j]);
                else
                    printf(".");
            }
            else
            {
                printf(" ");
            }

            j++;
        }

        printf("\n");
        i += 10;
    }
}
