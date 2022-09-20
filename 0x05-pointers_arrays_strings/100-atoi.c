#include "main.h"

/**
 * _atoi - convert string  to int
 * @s: string for conversion
 *
 * Return: int
 */

int _atoi(char *s)
{
	int con = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			con *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (s++);
	return (num * con);
}
