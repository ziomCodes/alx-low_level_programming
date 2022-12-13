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
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	_putchar(alpha);
	}
	_putchar(10);
	num++
}
}
