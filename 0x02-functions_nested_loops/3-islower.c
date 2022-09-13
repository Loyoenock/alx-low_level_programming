#include "main.h"

/**
 * int _islower - checks for lowercase charaters
 *
 * Return: 0
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else 
		return (0);
}
