#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number else 0
 * @n: prime input
 *
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, start));
}

/**
 * is_prime - return for prime else 0
 * @n: checking number
 * @start: number checking prime number
 *
 * Return: prime number else 0.
 */
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
