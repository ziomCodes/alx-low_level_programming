#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the intial segment of `s`
 */

unsigned int _strspn(char *s, char *accept)
{
	int num;
	int num1;
	int num2;

	num = 0;
	num2 = 0;

	while (s[num] != '\0')
	{
		num1 = 0;
		while (accept[num1] != '\0')
		{
			if (s[num] == accept[num1])
			{
				num2++;
				break;
			}
			num1++;
		}
		if (accept[num1] == '\0')
			break;
		num++;
	}
	return (num2);
}
