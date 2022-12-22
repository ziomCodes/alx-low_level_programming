#include "main.h"

/**
 * leet - encode string into 1337
 * @c: string to encode
 * Return: encoded string 's'
 */

char *leet(char *c)
{
	char _alpha[] = "aeotlAEOTL";
	char _ints[] = {'4', '3', '0', '7', '1',
		 '4', '3', '0', '7', '1'};
	int num, num1;

	for (num = 0; c[num] != '\0'; num++)
	{
		for (num1 = 0; _alpha[num1] != '\0'; num1++)
		{
		if (c[num] == _alpha[num1])
		{
		c[num] = _ints[num1];
		}
		}
	}
	return (c);
}
