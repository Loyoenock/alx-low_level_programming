#include "main.h"

/**
 * function that prints alphabeth 10x
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a, i;
	for (i = 0; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
