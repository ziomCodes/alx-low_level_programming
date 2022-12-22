#include "main.h"

/**
 * reverse_array - reverse the elements of an array integers
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int num;
	int num1;

	for (num = 0; num < (n / 2); num++)
	{
		num1 = a[num];
		a[num] = a[n - num - 1];
		a[n - num - 1] = num1;
	}
}
