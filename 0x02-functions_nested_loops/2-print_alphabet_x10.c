#include "main.h"
/**
 * print_alphabet_x10 - main
 * Description: print alphabets 10 times more
 * print them in lowercase letters
 * return - void
 */
void print_alphabet_x10(void)
{
	int num = 0;
	int alpha;

	while (num <= 9)
{
	for (num = 'a'; num <= 'z'; num++)
	{
	_putchar(num);
	}
	_putchar(10);
}
}
