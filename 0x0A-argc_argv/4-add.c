#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add 2 positive numbers and print the result
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Description: If no number is passed to program, print 0.
 * If one of the numbers contain non-digits, print Error.
 * Return: 1 if error, 0 if function runs properly.
 */

int main(int argc, char *argv[])
{
	int num, sum;
	char *x;
	int qut;

	sum = 0;
	if (argc > 1)
	{
		for (num = 1; argv[num]; num++)
		{
			qut = strtol(argv[num], &x, 10);
			if (!*x)
				sum += qut;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
