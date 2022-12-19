#include "main.h"

/**
 * rev_string - reverse a string
 * @s: char array type
 */

void rev_string(char *s)
{
	int num, i, len;
	char x;

	for (num = 0; s[num] != '\0'; num++)
	{
		;
	}

	len = num;
	for (num--, i = 0; i < len / 2; num--, i++)
	{
		x = s[i];
		s[i] = s[num];
		s[num] = x;
	}
}
