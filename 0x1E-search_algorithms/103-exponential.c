#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @low: starting index of the array
 * @high: ending index of the array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
    while (low <= high)
    {
        size_t mid = low + (high - low) / 2;

        printf("Searching in array: ");
        print_array(array, low, high);

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return (-1);
}

/**
 * print_array - Prints the elements of an array between two indices
 *
 * @array: pointer to the first element of the array
 * @start: starting index
 * @end: ending index
 */
void print_array(int *array, size_t start, size_t end)
{
    size_t i;

    for (i = start; i <= end; ++i)
    {
        printf("%d", array[i]);
        if (i < end)
            printf(", ");
    }
    printf("\n");
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;

    if (array == NULL || size == 0)
        return (-1);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound);

    if (bound < size)
        return binary_search(array, bound / 2, bound, value);
    else
        return binary_search(array, bound / 2, size - 1, value);
}

