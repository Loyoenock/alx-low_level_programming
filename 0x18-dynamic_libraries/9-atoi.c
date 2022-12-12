#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: input string
 * Return: converted integer
 */
int _atoi(char *s)
{
	int loop = 0, neg = 1, number = 0;

	if (s[0] == '-')
	{
		neg *= -1;
		loop++;
	}
	for (; s[loop] != '\0'; loop++)
		number = number * 10 + s[loop] - '0';
	number *= neg;
	return (number);
}
