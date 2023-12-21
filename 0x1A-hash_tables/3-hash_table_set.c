#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key. It cannot be an empty string.
 * @value: The value associated with the key. It must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *temp;

    /* Check for NULL pointers and empty strings */
    if (ht == NULL || key == NULL || *key == '\0')
        return (0);

    /* Get the index where the key/value pair should be stored */
    index = key_index((unsigned char *)key, ht->size);

    /* Check for collisions */
    temp = ht->array[index];
    while (temp != NULL)
    {
        /* If key already exists, update the value and return */
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value); /* free existing value */
            temp->value = strdup(value); /* duplicate new value */
            if (temp->value == NULL)
                return (0); /* strdup failed */
            return (1); /* success */
        }
        temp = temp->next;
    }

    /* Create a new node */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0); /* malloc failed */

    /* Duplicate the key and value */
    new_node->key = strdup(key);
    new_node->value = strdup(value);

    /* Check if strdup failed */
    if (new_node->key == NULL || new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (0);
    }

    /* Add the new node at the beginning of the list (handle collision) */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}

