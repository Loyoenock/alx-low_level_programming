#include "main.h"

/**
 *rev_string - string reversal
 *@s: string parameter
 *
 *Return: 0
 */
void rev_string(char *s)
{
	char rev = s[0];
	int num = 0;
	int i;

	while (s[num] != '\0')
		num++;
	for (i = 0; i < num; i++)
	{
		num--;
		rev = s[i];
		s[i] = s[num];
		s[num] = rev;
	}
}
