#include "main.h"

/**
 * string_toupper - Change lowercase letters to uppercase
 * @c: string to change
 * Return: c
 */

char *string_toupper(char *c)
{
	int num;

	for (num = 0; c[num] != '\0'; num++)
	{
		if (c[num] > 96 && c[num] < 123)
		{
			c[num] -= 32;
		}
	}
	return (c);
}
