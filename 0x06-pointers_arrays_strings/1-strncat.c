#include "main.h"
/**
 *_strncat - function that concatenates two strings
 *@dest: strings appended on
 *@src: does not need to be null-terminated if it contains n or more bytes
 *@n: param for integer comparison
 *Return: pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int str = 0, dest_len = 0;

	while (dest[str++])
		dest_len++;

	for (str = 0; src[str] && str < n; str++)
		dest[dest_len++] = src[str];
	return (dest);
}
