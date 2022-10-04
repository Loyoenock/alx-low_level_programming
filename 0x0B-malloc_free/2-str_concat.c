#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: pointer should point to a newly allocated space in memory
 * function should return NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *add_str;
	int index, add_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index] || s2[index]; index++)
		len++;
	add_str = malloc(sizeof(char) * len);
	if (add_str == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
		add_str[add_index++] = s1[index];
	for (index = 0; s2[index]; index++)
		add_str[add_index++] = s2[index];
	return (add_str);
}
