#include "main.h"

/**
 * is_prime - Prints whether prime
 * @i:  integer
 * @n: integer
 * Return: 1 else 0.
 */
int is_prime(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (is_prime(i + 1, n));
	return (1);
}
/**
 * is_prime_number - returns 1 if prime else 0
 * @n: checks values
 * Return: 1 else 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (is_prime(i, n));
}
