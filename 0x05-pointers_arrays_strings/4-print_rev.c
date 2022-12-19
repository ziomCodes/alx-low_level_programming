#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: char array type
 */

void print_rev(char *s)
{
	int num;

	for (num = 0; s[num] != '\0'; num++)
	{
		;
	}

	for (num--; num >= 0; num--)
	{
		_putchar(s[num]);
	}

	_putchar('\n');
}
