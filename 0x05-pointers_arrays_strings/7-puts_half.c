#include "main.h"

/**
 *puts_half - Prints half string
 *@str: strings
 *Return: Half String
 */
void puts_half(char *str)
{
	int i, h;

	i = 0;
	while (str[i] != '\0')
		i++;

	h = i / 2;
	if (i % 2 == 1)
		h++;

	while (h < a)
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
