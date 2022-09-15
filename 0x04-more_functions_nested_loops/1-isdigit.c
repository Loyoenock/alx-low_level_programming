#include "main.h"

/**
 * _isdigit - checks for digits 0 to 9
 * @c: prints numbers from 0 to 9
 * Return: 1 if is digit else 0
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
		return (0);
}
