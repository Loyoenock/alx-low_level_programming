#include "search_algos.h"

/**
  * jump_search - Searches value in a sorted array
  *               of ints using jump search.
  * @array: Pointer to initial element of array to be searched.
  * @size: Array size
  * @value: Search value.
  *
  * Return:  -1 if value is not found or array is NULL, otherwise
  *     return the index of the first occurrence of the value.
  *
  * Description: Prints each compared value in the array,
  *      using the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);
	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);
	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	return (array[i] == value ? (int)i : -1);
}
