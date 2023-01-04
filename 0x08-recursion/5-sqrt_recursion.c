#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (mend(n, 1));
}

/**
 * mend - helper function
 * @num: number to determine
 * @num1: incrementer to compare against 'c'
 * Return: square root if natural square root, or -1 if none found
 */

int mend(int num, int num1)
{
	int sqr;

	sqr = num1 * num1;
	if (sqr == num)
		return (num1);
	else if (sqr < num)
		return (mend(num, num1 + 1));
	else
		return (-1);
}
