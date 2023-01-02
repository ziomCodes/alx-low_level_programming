#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int num;
	int num1;
	char *p;

	num = 0;
	while (s[num] != '\0')
	{
		num1 = 0;
		while (accept[num1] != '\0')
		{
			if (accept[num1] == s[num])
			{
				p = &s[num];
				return (p);
			}
			num1++;
		}
		num++;
	}

	return (0);
}
