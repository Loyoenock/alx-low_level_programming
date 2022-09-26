#include "main.h"

/**
 * _memcpy - coping memory area
 * @dest: memory area
 * @src: copies momery byte from source
 * @n: number of byte copy
 *
 * Return: Copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
