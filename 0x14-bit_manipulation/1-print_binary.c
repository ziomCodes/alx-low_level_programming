#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int num, len = 0;
	unsigned long int pointt;

	for (num = 63; num >= 0; num--)
	{
		pointt = n >> num;

		if (pointt & 1)
		{
			_putchar('1');
			len++;
		}
		else if (len)
			_putchar('0');
	}
	if (!len)
		_putchar('0');
}
