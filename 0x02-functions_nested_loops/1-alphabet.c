#include "main.h"

/**
 * main - prints lower alpha.
 *
 * Description: function that prints alphabeth in lower case letter.
 *
 * Return : 0
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

