#include <stdio.h>
/**
 * print_name - Function prototype for the print_name function
 * @name: Pointer to a character string representing the name
 * @f: Function pointer to a function taking a char * argument and returning void
 *
 * Description: Function to print a name based on the provided function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		/* Call the function pointed to by f to print the name */
		f(name);
	}
}

