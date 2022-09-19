#include <stdio.h>
#include "main.h"

/**
 *_puts - printing a string followed by a new line.
 *@str: prints a string
 *
 *Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*str + i));
		i++;
	}
	putchar(10);
	}
