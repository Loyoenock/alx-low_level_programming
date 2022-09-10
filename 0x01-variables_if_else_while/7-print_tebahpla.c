#include <stdio.h>

/**
 * main - This prints reverse lowercase alphs
 *
 * Decription: Using put to print reverse alpha'
 *
 * Return: 0
 */
int main(void)
{
	char al;

	for (al = 'z' ; al >= 'a'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
