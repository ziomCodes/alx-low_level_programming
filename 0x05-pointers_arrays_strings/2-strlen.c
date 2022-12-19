#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: char type pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int num = 0;

	for (; s[num] != '\0'; num++)
		;

	return (num);
}
