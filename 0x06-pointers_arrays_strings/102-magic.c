#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int a[5];
    int *p;

    p = a;
    *(p + 2) = 98; /* This line adds a[2] = 98 */
    printf("a[2] = %d\n", *(p + 2));
    return (0);
}
