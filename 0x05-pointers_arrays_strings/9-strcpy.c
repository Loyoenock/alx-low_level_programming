#include "main.h"

/**
 *_strcpy - copy string to the buffer point
 *@dest: destiny
 *@src: source
 *
 * Return: destiny
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
