#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 */

void print_chessboard(char (*a)[8])
{
	int num;
	int num1;

	num = 0;
	while (num < 8)
	{
		num1 = 0;
		while (num1 < 8)
		{
			_putchar(a[num][num1]);
			num1++;
		}
		_putchar('\n');
		num++;
	}
}
