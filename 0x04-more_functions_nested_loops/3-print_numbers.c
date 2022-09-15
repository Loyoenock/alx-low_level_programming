#include "main.h"

/**
 * print_numbers - prints numbers 0 - 9
 * Return: 0
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n >= 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
