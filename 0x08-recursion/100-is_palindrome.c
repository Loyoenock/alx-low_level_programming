#include "main.h"


/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string plalindrome
 *
 * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}

/**
 * check - checks for palindromr string
 * @s: string
 * @start: start index
 * @end: end index
 * #flag: indicates for palindrome string
 *
 * Return: void
 */
void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}

/**
 * _strlen_recursion - calculated string length
 * @s: string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int sum = 0;
	
	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
