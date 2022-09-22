#include "main.h"

/**
 * string_toupper - Change lowercase numbers to Upper
 * @str: string to change
 *
 * Return: string
 */
char *string_toupper(char *)
{
	int s = 0;

	while (str[s] != '\0')
	{
		if (str[s] >= 'a' && str[s] <= 'z')
			str[s] -= 32;
		s++;
	}
	return (str);
}
