#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int and updates its parameter
 * @n: parameter
 * Return: 0
 */

void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("Address of 'n': %p\n", &n);
	printf("Valuse of 'p': %p\n", p);
	return (0);
}
