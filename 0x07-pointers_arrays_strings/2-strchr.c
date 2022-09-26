#include "main.h"

/**
 * _strchr - locating a character in a string
 * @s: checks strings
 * @c: first occurance of string c in s;
 *
 * Return: s or Null if not found.
 */

char *_strchr(char *s, char c)
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
