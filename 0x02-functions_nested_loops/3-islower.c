#include "main.h"

/**
 * _islower - checks for lowercase charaters
 *@c: function arguement to be used.
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
