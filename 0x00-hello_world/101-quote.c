#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    /* Use write to print to standard error */
    write(STDERR_FILENO,
          "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
          strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));

    /* Return 1 to indicate error */
    return (1);
}
