#include <stdio.h>

/**
 * Main - Program for printing alphabet in lowercase.
 *
 * Description: Funtion to print lowecase letters
 *After printing the alphabet is followed by a newline.
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
