#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: natural numbers
 *
 * Return: natural numbers or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
/**
 * _sqrt - square root of a number
 * @n: test number
 * @i: square root
 *
 * Return: square root
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (n);
	return (_sqrt(n, i + 1));
}
