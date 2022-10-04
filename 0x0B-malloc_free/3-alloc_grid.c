#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return: If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, b;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (; i < height; i++)
		{
			array[i] = (int *) malloc(sizeof(int) * width);
			if (array[i] != NULL)
			{
				for (b = 0; b < width; b++)
					array[i] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(array[i]);
					i--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
