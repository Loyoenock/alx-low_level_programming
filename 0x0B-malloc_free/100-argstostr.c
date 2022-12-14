#include "main.h"

/**
 *len - string length
 *@str: counting string
 *Return: length
 */
int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);

}
/**
 * argstostr - concatenates all the arguments of a program.
 *@ac: arg count to function
 *@av: array arg
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *new_str = NULL;
	int k = 0, i = ac, j, sum = 0, temp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (ac--)
		sum += (len(av[ac]) + 1);
	new_str = (char *) malloc(sum + 1);
	if (new_str != NULL)
	{
		while (k < i)
		{
			for (j = 0; av[k][j] != '\0'; j++)
				new_str[j + temp] = av[k][j];
			new_str[temp + j] = '\n';
			temp += (j + 1);
			k++;
		}
		new_str[temp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new_str);
}
