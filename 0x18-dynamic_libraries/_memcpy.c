#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n) {
    char *ptr = dest;
    while (n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    return (ptr);
}

