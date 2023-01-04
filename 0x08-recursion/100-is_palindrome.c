#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len;

	len = getLen(s) - 1;

	return (palind(s, --len));
}

/**
 * getLen - gets length of string
 * @c: string
 * Return: return length of string
 */

int getLen(char *c)
{
	if (*c == '\0')
		return (1);
	else
		return (1 + getLen(++c));
}

/**
 * palind - recursive check of palindrome
 * @c: string
 * @num: length of string
 * Return: 1 if palindrome, 0 if not
 */

int palind(char *c, int num)
{
	if (*c == *(c + num))
	{
		if (num <= 0)
			return (1);
		else
			return (palind(++c, num - 2));
	}
	else
		return (0);
}
