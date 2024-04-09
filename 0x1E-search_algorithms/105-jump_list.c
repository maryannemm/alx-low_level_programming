#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: The number of nodes in the list
 * @value: The value to search for
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present in the list or if list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    if (list == NULL)
        return NULL;

    size_t jump = sqrt(size);
    listint_t *prev = NULL, *current = list;

    while (current != NULL && current->n < value)
    {
        prev = current;
        size_t steps = 0;
        while (steps < jump && current->next != NULL && current->next->n < value)
        {
            current = current->next;
            steps++;
        }
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
    while (prev->index <= current->index && prev->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return prev;
        prev = prev->next;
    }
    return NULL;
}

