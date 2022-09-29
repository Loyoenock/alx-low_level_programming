#include "main.h"

/**
 * wildcmp - compars and returns 1 for identical strings else 0
 * @s1: Identical strings
 * @s2: special characters
 *
 * Return: 1 for identical strings else 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == *s1)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	return (0);
}
