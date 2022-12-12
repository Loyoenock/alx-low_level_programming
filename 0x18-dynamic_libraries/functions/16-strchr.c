#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string.
 * @c: character to locate.
 *
 * Return: pointer to first ocurrency of character in the str.
 * if char is not found, returns NULL.
 *
 */
char *_strchr(char *s, char c)
{
	unsigned int i, cond = 0;
	char *ptr;

	if (s == 0 && c == '\0')
	{
		ptr = s;
		return (ptr);
	}
	if (s == 0)
		return (0);

	for (i = 0; (s[i] != '\0'); i++)
		if (s[i] == c)
		{
			ptr = &(s[i]);
			cond = 1;
			break;
		}
	if (cond)
		return (ptr);
	if (c == '\0')
	{
		ptr = &(s[i]);
		return (ptr);
	}
	return (0);
}
