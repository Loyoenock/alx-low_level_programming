#include <stdio.h>

/**
 * main - all possible commbination of two digits
 *
 * Description: Using the putchar function to print possible combination.
 *
 * Return: 0
 */
int main(void)
{
	int i, c;

	for (i = 0; i <=9; i++)
	{
		for (c = 0; c <=9; c++)
		{
			if (c > i) 
			{
				putchar(i + '0');
				putchar(c + '0');
				if (i ! = 8)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n);
	recturn (0);
}
