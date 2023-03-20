#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string destination
 * @src: string to append
 * @n: number of elements to append in
 * Return: pointer to string 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int num;
	int num1;

	for (num = 0; dest[num] != '\0'; num++)
		;

	for (num1 = 0; src[num1] != '\0' && n > 0; num1++, n--, num++)
	{
		dest[num] = src[num1];
	}
	return (dest);
}
