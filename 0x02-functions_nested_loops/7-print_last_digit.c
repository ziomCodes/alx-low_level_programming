#include "main.h"
/**
*print_last_digit -  print last digit of a number
*@n: number to be tried
*Return: returns 0
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		{
		last_digit = last_digit * -1;
		_putchar(last_digit + '0');
		}
	else
		{
		_putchar(last_digit + '0');
		}
	return (0);
}
