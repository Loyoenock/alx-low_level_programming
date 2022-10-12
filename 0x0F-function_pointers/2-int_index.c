#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: Array elements
 * @size: Elements size
 * @cmp: compare pointer values
 *
 * Return: If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	return (0);
}
