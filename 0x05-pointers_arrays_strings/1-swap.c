#include "main.h"

/**
 *swap_int - swapping interger values.
 *@a: First int
 *@b: Second int
 *Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
