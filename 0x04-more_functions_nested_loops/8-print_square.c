#include <stdio.h>
#include "main.h"

/**
 * print_square - drawing squares
 * @size: parm
 * Return: 0
 */

void print_square(int size)
{
	int s1, s2;

	if (size > 0)
	{
		for (s1 = 0; s1 < size; s1++)
		{
			for (s2 = 0; s2 < (size - 1); s2++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
