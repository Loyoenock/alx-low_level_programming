#include "main.h"

/**
 *puts_half - Prints half string
 *@str: strings
 *Return: Half String
 */
void puts_half(char *str)
{
	int a, b, c;

	a = len(str);
	if (a % 2 == 1)
		b = a / 2 + 1;
	else
		b = a / 2;
	for (c = b; c < a; c++)
		_putchar(str[c]);
	_putchar('\n');
}
