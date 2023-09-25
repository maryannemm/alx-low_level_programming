#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to a pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *temp;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);

		/* Check if the current node points back to a previous node */
		if (temp < current)
		{
			*h = NULL;
			break;
		}
	}

	*h = NULL;
	return (count);
}

