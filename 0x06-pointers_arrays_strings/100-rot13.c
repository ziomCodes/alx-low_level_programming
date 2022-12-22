#include "holberton.h"
/**
 * *rot13 - encodes a string using rot13
 * @c: char string to check
 * Return: c
 */
char *rot13(char *c)
{
	int num, num1;
	char _check[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char _return[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (num = 0; c[num] != '\0'; num++)
	{
	for (num1 = 0; _check[num1] != '\0'; num1++)
	{
		if (c[num] == _check[num1])
		{
		c[num] = _return[num1];
		break;
		}
	}
	}
	return (c);
}
