#include <stdio.h>

/**
 * main - program prints all alphs apart from e and q
 *
 * Description: Using putchar function to print all alphs except e and q
 * 
 * Return: 0
 */
int main(void)
{
	
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
		}
	}

	putchar('\n');
	return (0);
}
