#include "main.h"


/**
 * sqrt_number - natural square root of a number
 * @n: number
 * @m: number
 *
 * Return: m and n
 */
int sqrt_number(int n, int m)
{
	if (m * m > n)
	{
		return (-1);
	}
	if (m * m == n)
	{
		return (m);
	}
	return (sqrt_number(n, m + 1));
}

/**
 * _sqrt_recursion - natural square root of a number
 *  @n: number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_number(n, 0));
}
