#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Use the write system call to print "_putchar" followed by a new line */
	write(1, "_putchar\n", 9);

	return (0);
}
