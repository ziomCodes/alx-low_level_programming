#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previous memory block
 * @old_size: size in bytes of allocated space for `ptr`
 * @new_size: size in bytes for new allocated space
 * Return: Pointer to new memory block, or NULL if error
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ch, *dup;
	unsigned int num;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ch = malloc(new_size);
		if (ch == NULL)
			return (NULL);
		return (ch);
	}

	ch = malloc(new_size);
	if (ch == NULL)
		return (NULL);
	dup = ptr;
	for (num = 0; num < old_size; num++)
		ch[num] = dup[num];
	free(ptr);
	return (ch);
}
