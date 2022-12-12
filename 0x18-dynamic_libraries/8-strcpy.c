#include "main.h"

/**
 * *_strcpy - copy the string pointed to by source inluding the null byte
 * to the buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 *
 * Return: @direction = pointer to destination.
 */
char *_strcpy(char *dest, char *src)
{
	char *direction = dest;

	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (direction);
}
