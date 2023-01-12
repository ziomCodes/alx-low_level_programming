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
	void *ch;
	unsigned int num;

	if (ptr == NULL)
	{
		ch = malloc(new_size);
		return (ch);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		ch = malloc(new_size);
		if (ch != NULL)
		{
			for (num = 0; num < min(old_size, new_size); num++)
				*((char *)ch + i) = *((char *) ptr + i);
			free(ptr);
			return (ch);
		}
		else
			return (NULL);
	}
}
