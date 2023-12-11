#include "main.h"

/**
 * _strncpy - copies n characters from a string
 * @dest: the destination buffer
 * @src: the source string
 * @n: the number of characters to copy
 *
 * Return: pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n) {
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    for (; i < n; i++) {
        dest[i] = '\0';
    }

    return dest;
}

