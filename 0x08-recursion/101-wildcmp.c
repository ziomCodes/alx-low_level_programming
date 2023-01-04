#include "main.h"

/**
 * wildcmp - compare two strings with "wildcard expansion" capabilities
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if strings can be considered identical, else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '*')
			return (wildcmp(s1, ++s2));
		else if (*s1 == '*' && *s2 == '\0')
			return (wildcmp(++s1, s2));
		return (0);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(++s1, ++s2));
	}
	else if (*s1 == '*')
	{
		if (*(s1 + 1) == '*')
			return (wildcmp(++s1, s2));
		else
			return (wildcmp(s1, srch(s2, *(s1 + 1), 0, 0) + s2));
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, ++s2));
		else
			return (wildcmp(s1 + srch(s1, *(s2 + 1), 0, 0), s2));
	}

	return (0);

}

/**
 * srch - compare two strings with "wildcard expansion" capabilities
 * @x: string 1
 * @z: string 2
 * @num: int
 * @num1: int
 * Return: srch
 */
int srch(char *x, char z, int num, int num1)
{
	if (*(x + num) == '\0')
		return (num1 + 1);
	else if (*(x + num) == z || *(x + num) == '*')
		num1 = num;

	return (srch(x, z, num + 1, num1));
}
