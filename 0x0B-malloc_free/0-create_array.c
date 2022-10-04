#include "main.h"
#include <stdlib.h>

/**
 * *create_array - an array of chars, and initializes it with a specific char
 * @size: Array size
 * @c: Array of characters
 *
 * Return: Point to the Array or Null if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);


}