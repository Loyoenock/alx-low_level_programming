#include "main.h"

/**
 * factorial - returning a factorial of a given number.
 * @n: factorial
 *
 * Return: factorial
 */
int factorial(int n)
{
	int nFactorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	nFactorial = factorial(n - 1);
	return (n * nFactorial);
}
