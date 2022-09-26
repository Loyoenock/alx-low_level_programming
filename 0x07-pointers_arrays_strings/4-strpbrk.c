#include "main.h"

/**
 * _strpbrk - searching a string for any of a set of bytes
 * @s: checking string
 * @accept: string for checking byte
 *
 * Return: a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (0);
}
