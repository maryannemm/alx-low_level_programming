#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int i = 0;

    while (i < argc)
    {
        printf("%s\n", argv[i]);
        i++;
    }

    return (0);
}
