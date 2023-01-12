#include "main.h"

/**
 * malloc_checked - allocate memory using malloc.
 * Description: If malloc fails, terminate process with status 98.
 * @b: unsigned int memory size to allocate
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ch;

	ch = malloc(b);
	if (ch == NULL)
		exit(98);

	return (ch);
}
