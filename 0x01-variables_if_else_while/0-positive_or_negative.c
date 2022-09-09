#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this program will assign positive and negative random numbers
 *
 * Description : Function to generate random numbers
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(timeout(0));
	n = rand() - RAND_MAX/2;
	if (n > 0) 
	{
		printf("%d is positive\n", n);
	}
	else  if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n," n)
	}
	return (0);
}
