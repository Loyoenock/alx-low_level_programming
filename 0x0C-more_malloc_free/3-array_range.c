#include "main.h"
#include <stdlib.h>

/**
 * array_range -  function that creates an array of integers
 * @min: Minimum number
 * @max: maximum number
 *
 * Return: pointer to the newly created array
 * If min > max, return NULL If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int i, l;
	int *ptr;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	ptr = malloc(sizeof(int) * 1);
	if (ptr == NULL)
	return (NULL);
	for (i = 0; i < l; min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
