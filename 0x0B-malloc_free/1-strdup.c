#include "main.h"
#include <stdio.h>

/**
 * *_strdup - returns a pointer to a newly allocated space with string copy
 * @str: duplicate of the string
 *
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer
 */
char *_strdup(char *str)
{
	char *strcpy;
	int index, len;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	strcpy = malloc(sizeof(char) * (len + 1));
	if (strcpy == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
	{
		strcpy[index] = str[index];
	}
	strcpy[len] = '\0';
	return (strcpy);
}
