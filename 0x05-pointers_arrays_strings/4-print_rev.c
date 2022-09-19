#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *print_rev - Printing reverse strings
 *@s: reverse string
 *Return: 0
 */

void print_rev(char *s)
{
	int str = strlen(s);

	while (str--)
		putchar(*(s + str));
	putchar(10);
}
