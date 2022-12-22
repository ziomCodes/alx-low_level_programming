#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: string destination
 * @src: string to copy
 * @n: number of characters to copy
 * Return: string 'dest'
 */

char *_strncpy(char *dest, char *src, int n)
{
	int num;

	for (num = 0; num < n && src[num] != '\0'; num++)
		dest[num] = src[num];

	for (; n > num; num++)
		dest[num] = '\0';

	return (dest);
}
