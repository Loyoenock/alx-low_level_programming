#include "main.h"

/**
 * _abs - computing the absolute value of integer
 * @c: int for function agrgument
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
