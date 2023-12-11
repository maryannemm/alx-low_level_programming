#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src) {
    char *ptr = dest;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return ptr;
}

