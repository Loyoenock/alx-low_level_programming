#include "main.h"

/**
 * -isupper - checks for uppercase characters
 * @c: test for characters
 * Return: 1 if uppercase else 0
 */

 int _isupper(int c)
{
	if ((c >= 'A') && (c >= 'Z'))
	{
		return (1);
	}
		return (0);
}
