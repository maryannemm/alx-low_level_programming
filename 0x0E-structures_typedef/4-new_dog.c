#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Owner of the new dog
 *
 * Return: Pointer to the new dog (struct dog)
 *         NULL if memory allocation fails or if any argument is NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog_ptr;
    char *name_copy, *owner_copy;

    if (name == NULL || owner == NULL)
        return (NULL);

    new_dog_ptr = malloc(sizeof(dog_t));
    if (new_dog_ptr == NULL)
        return (NULL);

    name_copy = strdup(name);
    owner_copy = strdup(owner);

    if (name_copy == NULL || owner_copy == NULL)
    {
        free(new_dog_ptr);
        free(name_copy);
        free(owner_copy);
        return (NULL);
    }

    new_dog_ptr->name = name_copy;
    new_dog_ptr->age = age;
    new_dog_ptr->owner = owner_copy;

    return (new_dog_ptr);
}

