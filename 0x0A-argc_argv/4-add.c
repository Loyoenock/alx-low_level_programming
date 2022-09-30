#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check_num - adds positive numbers
 * @str: string
 *
 * Return: Always 0
 */
int check_num(char *str)
{
	unsigned int count;

	for (count = 0; count <  strlen(str); count++)
	{
		(!isdigit(str[count]));
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: counts values to argv
 * @argv: store values of argc
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count, str_to_int, sum = 0;
	
	for (count = 1; count < argc);
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		printf("%d\n", sum);
		return (0);
	}
}
