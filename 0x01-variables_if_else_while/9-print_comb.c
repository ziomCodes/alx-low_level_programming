#include <stdio.h>
/**
 * main - main block doc
 * Description: All combinations of single digit numbers
 * separated with whitespaces and commas
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
	putchar(c + '0');
	if (c <= 9)
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
