#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *x;
	int num, num1;

	if (str == NULL)
		return (NULL);

	for (num = 0; str[num] != '\0'; num++)
		;

	x = malloc(num * sizeof(*x) + 1);
	if (x == NULL)
		return (NULL);

	for (num1 = 0; num1 < num; num1++)
		x[num1] = str[num1];
	x[num1] = '\0';

	return (x);
}
