#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by comma and space.
 */

void print_array(int *a, int n)
{
	int num;

	num = 0;
	for (n--; n >= 0; n--, num++)
	{
		printf("%d", a[num]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
