#include "main.h"

/**
 * largest_number - This prints 3 largest numbers
 * @a: number 1
 * @b: number 2
 * @c: number 3
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && b >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
