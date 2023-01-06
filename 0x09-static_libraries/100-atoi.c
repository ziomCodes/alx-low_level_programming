#include "main.h"

/**
 * _atoi - Convert a string to integer.
 * @s: char array string
 * Return: first integer found in string
 */

int _atoi(char *s)
{
	int num;
	int x, y;

	x = 0;
	y = -1;
	for (num = 0; s[num] != '\0'; num++)
	{
		if (s[num] == '-')
			y *= -1;

		if (s[num] > 47 && s[num] < 58)
		{
			if (x < 0)
				x = (x * 10) - (s[num] - '0');
			else
				x = (s[num] - '0') * -1;

			if (s[num + 1] < 48 || s[num + 1] > 57)
				break;
		}
	}
	if (y < 0)
		x *= -1;

	return (x);
}
