#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* main - main block Description: Get a random number and print the number and if it is positive, negative, or zero */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is posetive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
