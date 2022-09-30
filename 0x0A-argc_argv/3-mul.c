#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: counts multiples in argv
 * @argv: stores multiples from argc
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;

if (argc == 3)
{
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
	printf("Error\n");
	return (1);
}
