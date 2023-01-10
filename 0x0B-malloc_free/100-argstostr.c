#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: argument count
 * @av: double pointer to array of strings
 * Return: Null if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *x, *p;
	int num, num1, sum;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (num = 0, sum = 0; num < ac; num++)
	{
		for (num1 = 0; *(*(av + num) + num1) != '\0'; num1++, sum++)
			;
		sum++;
	}
	sum++;

	x = malloc(sum * sizeof(char));
	if (x == NULL)
		return (NULL);

	p = x;
	for (num = 0; num < ac; num++)
	{
		for (num1 = 0; av[num][num1] != '\0'; num1++)
		{
			*x = av[num][num1];
			x++;
		}
		*x = '\n';
		x++;
	}

	return (p);
}
