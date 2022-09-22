#include "main.h"

/**
 *_strcmp - String comparison
 *@s1: String number 1
 *@s2: string number 2
 *Return:	0 if s1 == s2
 *		Negative if s1 < s2
 *		Positive if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int s = 0, diff = 0;

	while (1)
	{
		if (s1[s] == '\0' && s2[s] == '\0')
			break;
		else if (s1[s] == '\0')
		{
			diff = s2[s];
			break;
		}
		else if (s2[s] == '\0')
		{
			diff = s1[s];
			break;
		}
		else if (s1[s] != s2[s])
		{
			diff = s1[s] - s2[s];
			break;
		}
		else
			s++
	}
	return (diff);
}
