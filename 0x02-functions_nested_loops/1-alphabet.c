#include "main.h"
/**
*print_alphabet - function that print alphabet
*Description: it prints in lowercase
*Return: void
*/
void print_alphabet(void)
{
	int alpha
;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
		_putchar (alpha);
		}
	_putchar (10);
}
