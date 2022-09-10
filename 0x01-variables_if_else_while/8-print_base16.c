#include <stdio.h>

/**
 * main - Prints bases of 16 in lowercase.
 *
 * Description: This function uses put to print 16 basses and begins new line
 *
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}
	for (i = 'a' ; i <= 'f' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
