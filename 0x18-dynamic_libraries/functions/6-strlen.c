#include "main.h"

/**
 * _strlen - returns the string length.
 * @s: string.
 *
 * Return: String  length.
 */
int _strlen(char *s)
{
	int i = 0;
	int cont = 0;

	while (s[i] != '\0')
	{
		cont++;
		i++;
	}
	return (cont);
}
