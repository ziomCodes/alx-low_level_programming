#include "main.h"

/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null if error, else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ch;
	unsigned int num;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ch = malloc(nmemb * size);
	if (ch == NULL)
		return (NULL);
	for (num = 0; num < nmemb; num++)
		ch[num] = 0;

	return (ch);
}
