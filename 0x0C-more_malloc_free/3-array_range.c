#include "main.h"

/**
 * array_range - create an array of integers inclusive of min and max
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ch;
	int num;
	int num1 = 0;

	if (min > max)
		return (NULL);
	ch = malloc(sizeof(*ch) * ((max - min) + 1));
	if (ch != NULL)
	{
		for (num = min; num <= max; num++)
		{
			ch[num1] = num;
			num1++;
		}
		return (ch);
	}
	else
		return (NULL);

}
