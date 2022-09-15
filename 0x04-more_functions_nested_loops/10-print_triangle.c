#include <stdio.h>
#include "main.h"

/**
 * print_triangle - printing a triangel
 * @size: triangel pramater
 * Return: 0
 */

void print_triangle(int size)
{
	int t1, t2;
	
	if (size > 0)
	{
		for (t1 = 1; t1 <= size; t1++)
		{
			for ((t2 = size - t1); t2 > 0; t2--)
			{
				putchar(' ');
			}
			for (t2 = 0; inc2 < t1; t2++)
			{
				putchar('#');
			}
			if (t1 == size)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
