#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: parem
 *Return: 0
 */

void print_diagonal(int n)
{
	int l, d;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (d = 0; d < l; d++)
			{
				putchar(' ');
			}
			putchar('\\');
			if (l == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
