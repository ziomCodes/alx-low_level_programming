#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: index of first element that matches with `cmp`, or -1 if none found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int num = 0;

	if (array == NULL || cmp == NULL)
	return (-1);

	for (; num < size; num++)
	{
	if (cmp(array[num]) != 0)
	return (num);
	}

	return (-1);
}
