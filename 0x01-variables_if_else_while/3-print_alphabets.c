#include <stdio.h>

/**
 * main - this program prints both lower and upper alph letter and begins a line *
 * Descrition: This is a putchar function the prints alphas.
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
	for (al = 'A' ; al <= 'Z' ; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
