#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    int step;
    int prev = 0;
    int i;

    if (array == NULL || size == 0)
        return -1;

    step = sqrt(size);

    printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
    while (array[step] < value && step < (int)size)
    {
        prev = step;
        step += sqrt(size);
        if (step < (int)size)
            printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
    }

    printf("Value found between indexes [%d] and [%d]\n", prev, step);

    i = prev;
    while (i < step && i < (int)size)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
        ++i;
    }

    return -1;
}

