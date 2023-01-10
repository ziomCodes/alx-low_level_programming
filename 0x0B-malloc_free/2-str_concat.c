#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *x;
	int num, num1;
	int m, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (num = 0; s1[num] != '\0'; num++)
		;
	for (num1 = 0; s2[num1] != '\0'; num1++)
		;

	x = malloc((num * sizeof(*s1)) + (num1 * sizeof(*s2)) + 1);
	if (x == NULL)
		return (NULL);

	for (m = 0, n = 0; m < (num + num1 + 1); m++)
	{
		if (m < num)
			x[m] = s1[m];
		else
			x[m] = s2[n++];
	}

	return (x);
}
