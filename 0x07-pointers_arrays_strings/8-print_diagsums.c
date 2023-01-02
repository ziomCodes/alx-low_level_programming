#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix of ints
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int num, tot, mat;

	num = 0;
	tot = 0;
	mat = size * size;
	while (num < mat)
	{
		if (num % (size + 1) == 0)
			tot += a[num];
		num++;
	}
	printf("%d, ", tot);

	tot = 0;
	num = 0;
	while (num < mat)
	{
		if (num % (size - 1) == 0 && num != (mat - 1) && num != 0)
			tot += a[num];
		num++;
	}
	printf("%d\n", tot);
}
