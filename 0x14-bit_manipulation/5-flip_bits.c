#include "main.h"

/**
 *flip_bits - A function that flips bits until the number n is equal to m
 *@n: a variable that holds a value
 *@m: a variable that holds the end result value
 *
 *Return: The number of times needed to flip the bits in order to change n
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt, num;

	cnt = num = 0;
	while (num < 64)
	{
		if ((n & 1) != (m & 1))
			cnt++;
		num++;
		n = n >> 1;
		m = m >> 1;
	}
	return (cnt);
}
