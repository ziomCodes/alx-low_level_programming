#include "main.h"

#include <stdio.h>
#include <stdlib.h>

/**
 *binary_to_uint - a function that converts a binary number to an unsigned int
 *@b: a pointer that points to the string of numbers being passed
 *
 *Return: 0 if NULL is passed or if the first character is not a 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int num;
	unsigned int mag, tot;

	if (b == NULL)
		return (0);
	for (num = 0; b[num] != '\0'; num++)
	{
		if (b[num] != '0' && b[num] != '1')
			return (0);
	}
	mag = 1;
	tot = 0;
	for (num--; num >= 0; num--, mag *= 2)
	{
		if (b[num] == '1')
			tot += mag;
		else if (b[num] == '0')
			tot = tot + 0;
	}
	return (tot);
}
