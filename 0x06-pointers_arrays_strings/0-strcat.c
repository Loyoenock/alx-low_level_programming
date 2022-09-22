#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest:overwriting the terminating null byte (\0) at the end of dest
 *@src: function appends the src string to the dest string
 *
 * Return: pointer the string desk
 */

char *_strcat(char *dest, char *src)
{
	int str = 0, dest_len = 0;

	while (dest[str++])
		dest_len++;
	for (str = 0; src[str]; str++)
		dest[dest_len++] = src[str];
	return (dest);
}
