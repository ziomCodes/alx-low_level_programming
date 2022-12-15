#include <stdio.h>
#include <math.h>
/**
 * main - main block doc
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */
int main(void)
{
	int x;
	long n = 612852475143;

	for (x = (int) sqrt(n); x > 2; x++)
	{
		if (n % x == 0)
		{
			printf("%d\n", x);
			break;
		}
	}

	return (0);
}
