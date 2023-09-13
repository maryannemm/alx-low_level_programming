#include "3-calc.h"

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array of command line argument strings
 *
 * Return: 0 on success, otherwise 98, 99, or 100 on failure
 */
int main(int argc, char *argv[])
{
    int a, b;
    int result;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        return (98);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);
    operation = get_op_func(argv[2]);

    if (operation == NULL)
    {
        printf("Error\n");
        return (99);
    }

    result = operation(a, b);
    printf("%d\n", result);

    return (0);
}

