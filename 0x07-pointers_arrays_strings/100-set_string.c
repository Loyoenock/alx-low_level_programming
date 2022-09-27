#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: String pointer
 * @to: change pointer to sting
 *
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
