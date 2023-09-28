#include "main.h"

/**
 * clear_bit - Clears (sets to 0) the value of a bit at a given index.
 * @n: A pointer to the number in which to clear the bit.
 * @index: The index of the bit to clear (0-based).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1); /* Index out of range */

	*n &= ~(1UL << index); /* Clear the bit at the given index */

	return (1);
}

