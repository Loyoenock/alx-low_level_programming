#include "main.h"

/**
 * _atoi - convert string  to int
 * @s: string for conversion
 *
 * Return: int
 */

int _atoi(char *s)
{
	int result = 0;
	int i = 0;
	int sign = 1;

	if (*s[i] == '_')
	{
		sign = -1;
		i++;
	}
	while (*s[i])
	{
		if (!(*s[i] - '0' >= 0 && *s[i] - '0' <= 9))
			return (-1);
		result = result * 10 + *s[i] - '0';
		i++;
	}
	return (result * sign);
}
