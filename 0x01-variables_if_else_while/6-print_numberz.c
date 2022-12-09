#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * using only putchar command
 * Return: 0
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
