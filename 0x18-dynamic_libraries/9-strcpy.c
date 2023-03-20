#include "main.h"

/**
 * *_strcpy - function to copy string
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int num;

	for (num = 0; src[num] != '\0'; num++)
	{
		dest[num] = src[num];
	}
	dest[num] = '\0';

	return (dest);
}
