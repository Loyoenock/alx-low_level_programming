#include <stdio.h>

/**
 * main - Computers
 *
 * Description: 'Prints different computer sizes'
 *
 * Returns (0)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	print("Size of a char: %d byte(s)\n" sizeof(a));
	print("Size of an int: %d byte(s)\n" sizeof(b));
	print("Size of a long int: %d byte(s)\n" sizeof(c));
	print("Size of a long long int: %d byte(s)\n" sizeof(d));
	print("Size of a float: %d byte(s)\n" sizeof(e));
	return (0)
}
