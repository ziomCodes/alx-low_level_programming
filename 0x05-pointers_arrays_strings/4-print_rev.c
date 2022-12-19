#include "main.h"

/**
* print_rev - prints a string in a reverse mode
* @s: char array type to reverse
*/

void print_rev(char *s)
{
	int num = 0, num1 = 0;

	num = _strlen(s);
	for (num1 = num - 1; num1 >= 0; num1--)
	{
	_putchar(s[num1]);
	}

	_putchar('\n');
}
