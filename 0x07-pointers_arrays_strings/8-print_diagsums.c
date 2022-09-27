#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 * @a: The start of matrix
 * @size: width for matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int index, num1 = 0, num2 = 0;

	for (index = 0; index < size; index++)
	{
		num1 += a[index];
		a += size;
	}
	a -= size;
	for (index = 0; index < size; index++)
	{
		num2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", num1, num2);
}
