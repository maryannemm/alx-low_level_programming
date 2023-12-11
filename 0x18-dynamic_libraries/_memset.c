#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n) {
    while (n > 0) {
        *s = b;
        s++;
        n--;
    }
    return (s);
}

