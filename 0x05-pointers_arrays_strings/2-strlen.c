#include "main.h"

/**
 *_strlen - Returning a length of a string.
 *@s: string
 *Return: integer length.
 */

int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;

	return (c);
}
