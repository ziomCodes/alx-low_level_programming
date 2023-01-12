#include "main.h"

/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *add;
	unsigned int stl = n, num;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (num = 0; s1[num]; num++)
		stl++;

	add = malloc(sizeof(char) * (stl + 1));

	if (add == NULL)
		return (NULL);

	stl = 0;

	for (num = 0; s1[num]; num++)
		add[stl++] = s1[num];

	for (num = 0; s2[num] && num < n; num++)
		add[stl++] = s2[num];

	add[stl] = '\0';

	return (add);
}
