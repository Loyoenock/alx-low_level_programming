#include "main.h"
#include <string.h>
/**
 *_strncpy - copies up to n characters from the string pointed
 *
 * the remainder of dest will be padded with null bytes
 *@dest: This is the pointer to the destination array to copy content
 *@src: This is the string to be copied
 *@n: The number of characters to be copied from source
 *Return: strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
