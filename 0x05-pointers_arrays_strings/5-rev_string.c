#include "main.h"

/**
 *rev_string - string reversal
 *@s: string parameter
 *
 *Return: 0
 */
void rev_string(char *s)
{
	int a, b, c, tmp;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	c = 0;
	b = a - 1;

	while (b < c)
	{
		tmp = s[c];
		s[c] = s[b];
		s[b] = tmp;
		c++;
		b--;
	}
}