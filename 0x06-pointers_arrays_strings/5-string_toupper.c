#include "main.h"

/**
 * string_toupper - Change lowercase numbers to Upper
 * @str: string to change
 *
 * Return: string
 */
char *string_toupper(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
