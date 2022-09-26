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
	int a;

	for (a = 0; *(s + a); a++)
	{
		if (*(s + a) == c)
			return (s + a);
	}
	if (*(s + a) == c)
		return (s + a);
	return (0);
}
