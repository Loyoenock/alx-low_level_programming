#include <stdio.h>

/**
 * Main - Program for printing alphabet in lowercase followed by newline.
 *
 * Description: Funtion to print lowecase letters from a-z in ascending order.
 *
 * Return: 0
 */
int main(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
