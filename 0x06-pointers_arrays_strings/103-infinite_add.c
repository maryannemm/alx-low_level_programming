#include <stddef.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result if successful, otherwise 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len_n1 = 0, len_n2 = 0;
    int carry = 0, sum = 0;
    int i, j, k;

    while (n1[len_n1])
        len_n1++;
    while (n2[len_n2])
        len_n2++;

    if (size_r <= len_n1 || size_r <= len_n2)
        return (0);

    r[size_r] = '\0';
    i = len_n1 - 1;
    j = len_n2 - 1;
    k = size_r - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        if (i >= 0)
            sum += n1[i--] - '0';
        if (j >= 0)
            sum += n2[j--] - '0';
        sum += carry;

        carry = sum / 10;
        r[k--] = (sum % 10) + '0';

        sum = 0;
    }

    if (k >= 0 && r[k + 1] != '0')
        return (0);

    return (r + k + 1);
}
