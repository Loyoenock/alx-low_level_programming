#include "search_algos.h"

/**
  * advanced_binary_recursive - This function uses recursive binary
  *             search to find a value in a sorted integer array
  * @array: Array search start: Pointer to the first element.
  * @left: Search start index: [sub]array beginning.
  * @right: Search end index: [sub]array conclusion.
  * @value: Search value.
  *
  * Return: -1 if the value is not found,
  *         else returns the index of the value..
  *
  * Description: Prints the [sub]array during each change.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);
	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - Uses advanced binary search to
  *			find a value in a sorted integer array..
  * @array: Pointer to the first element of the array..
  * @size: Array elements
  * @value: The value to search for.
  *
  * Return:  -1 if the value is not found,
  *		else returns the index of the value.
  * Description: Prints the [sub]array during each change..
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0
			return (-1);
			return (advanced_binary_recursive(array, 0, size - 1, value));
}
