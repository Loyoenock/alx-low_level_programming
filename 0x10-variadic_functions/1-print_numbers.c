#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string character between numbers
 * @n: Number of integers passed to functions
 *
 * Return: If separator is NULL, don’t print it
 * Print a new line at the end of your function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(list, int);
		printf("%d", number);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
