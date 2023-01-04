#include "main.h"

/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (hai(n, 2));
}

/**
 * sqroot - return square root of number
 * @num: number
 * @num1: number
 * Return: square root of 'num'
 */

int sqroot(int num, int num1)
{
	int sqr;

	sqr = num1 * num1;
	if (sqr >= num)
		return (num1);
	else
		return (sqroot(num, num1 + 1));
}

/**
 * ease - helper function, recursive steps taken
 * @num: number given to original function is_prime_number
 * @num1: incrementer divisor
 * Return: 0 if not prime, 1 if prime
 */

int ease(int num, int num1)
{
	if (num % num1 == 0)
		return (0);
	else if (sqroot(num, 1) < num1)
		return (1);
	else
		return (ease(num, num1 + 1));
}
