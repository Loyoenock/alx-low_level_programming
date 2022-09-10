#include <stdio.h>

/**
 * main - program for all possible combinations
 *
 * Description: Uses for and Putchar to print combinations
 *
 * Return: 0
 */
int main(void)
{
	int i;
	for (i = 48; i <= 57 ; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar('.');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
