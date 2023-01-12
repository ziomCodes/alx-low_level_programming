#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	int lenstr, num, num1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lenstr = (unsigned int)strLength(s1);
	ch = malloc((lenstr + n + 1) * sizeof(char));
	if (ch == NULL)
		return (NULL);
	for (num = 0, num1 = 0; num < (lenstr + n); num++)
	{
		if (i < lenstr)
			ch[num] = s1[num];
		else
			ch[num] = s2[num1++];
	}
	ch[num] = '\0';

	return (ch);
}

/**
 * strLength - find length of string
 * @m: string
 * Return: length of string
 */

int strLength(char *m)
{
	int num;

	for (num = 0; s[num] != '\0'; num++)
		;
	return (num);
}
