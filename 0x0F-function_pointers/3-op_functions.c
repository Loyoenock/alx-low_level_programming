#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sums two integer values
 * @a: int a
 * @b: int b
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two inter values
 * @a: first int
 * @b: second int
 *
 * Return: subtraction of a from b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - produce product of two int values.
 * @a: first int
 * @b: second int
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division of two int values
 * @a: First int
 * @b: Second int
 *
 * Return:  Division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modula of two int values
 * @a: First int
 * @b: Second int
 *
 * Return: Reminder of a modula b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
