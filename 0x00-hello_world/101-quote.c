#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	write(STDERR_FILENO,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));

	return (1);
}
