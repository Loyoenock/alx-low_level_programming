#include <stdlib.h>
#include  "function_pointers.h"

/**
 * print_name -  function that prints a name
 * @name: for printing name
 * @f: pointer function
 *
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
