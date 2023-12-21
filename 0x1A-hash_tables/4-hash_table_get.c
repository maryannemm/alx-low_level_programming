#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key you are looking for
 *
 * Return: The value associated with the element, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *temp;

    /* Check for NULL pointers and empty strings */
    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    /* Get the index where the key should be stored */
    index = key_index((unsigned char *)key, ht->size);

    /* Search for the key in the linked list at the computed index */
    temp = ht->array[index];
    while (temp != NULL)
    {
        if (strcmp(temp->key, key) == 0)
            return (temp->value); /* Found the key, return the associated value */
        temp = temp->next;
    }

    return (NULL); /* Key not found */
}

