#include "main.h"

/**
 * puts2 - print char out of string
 * @str: char array type
 * Description: Print 1st char, then 3rd, then 5th, etc..
 */

void puts2(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		if (num % 2 == 0)
			_putchar(str[num]);
	}
	_putchar('\n');
}
