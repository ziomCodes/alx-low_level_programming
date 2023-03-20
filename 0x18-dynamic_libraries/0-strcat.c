#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to add to
 * @src: char string
 * Return: pointer to string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int num;
	int num1;

	for (num = 0; dest[num] != '\0'; num++)
		;

	for (num1 = 0; src[num1] != '\0'; num1++)
	{
		dest[num] = src[num1];
		num++;
	}

	dest[num] = '\0';
	return (dest);
}
