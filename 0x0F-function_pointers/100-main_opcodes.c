#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Recursively prints the opcodes of a function.
 * @start: Pointer to the start of the function.
 * @end: Pointer to the end of the function.
 */
void print_opcodes(unsigned char *start, unsigned char *end)
{
    if (start >= end)
        return;

    printf("%02x", *start);
    if (start < end - 1)
        printf(" ");

    print_opcodes(start + 1, end);
}

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of command line arguments.
 * @argv: An array of command line argument strings.
 *
 * Return: 0 on success, otherwise 1 or 2 on failure.
 */
int main(int argc, char *argv[])
{
    int bytes;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    bytes = atoi(argv[1]);

    if (bytes < 0)
    {
        printf("Error\n");
        return (2);
    }

    unsigned char *main_start = (unsigned char *)main;
    unsigned char *main_end = main_start + bytes;

    print_opcodes(main_start, main_end);
    printf("\n");

    return (0);
}

