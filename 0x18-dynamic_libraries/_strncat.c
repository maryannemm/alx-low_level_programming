#include "main.h"

/**
 * _strncat - concatenates n characters from two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the number of characters to concatenate
 *
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n) {
    char *ptr = dest;
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    *dest = '\0';
    return (ptr);
}

