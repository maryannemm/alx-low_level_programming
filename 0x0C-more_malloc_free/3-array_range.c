#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The minimum value (included).
 * @max: The maximum value (included).
 *
 * Return: A pointer to the newly created array.
 *         If min > max or malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
    int *arr;
    int size, i;

    if (min > max)
        return (NULL);

    size = max - min + 1;

    arr = malloc(sizeof(int) * size);

    if (arr == NULL)
        return (NULL);

    i = 0;
    while (i < size)
    {
        arr[i] = min;
        min++;
        i++;
    }

    return (arr);
}

