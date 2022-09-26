#include "main.h"

/**
 * _strspn - getting length of a prefix substring
 * @s: bytes in intial segment
 * @accept: bytes accepted
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
