#include <stdio.h>

/**
 *
 * main - prints count of multiple
 * Description: a function the computes and print multiples of 3 & 5 > 1024.
 * Return: return 0
*/
int main(void)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
