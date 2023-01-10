#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initialize with specific char
 * @size: size of array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int num;

	if (size == 0)
		return (NULL);

	x = malloc(size * sizeof(*x));
	if (x == NULL)
		return (NULL);

	for (num = 0; num < size; num++)
		x[num] = c;

	return (x);
}
