#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: char array type
 * Description: use _putchar
 */

void _puts(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
}
