#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog's attributes
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Name of the dog's owner (string)
 *
 * Description: This structure defines a dog's attributes.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

