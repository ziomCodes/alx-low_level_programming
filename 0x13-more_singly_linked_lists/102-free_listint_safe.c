#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int lynt;
	listint_t *gzw;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		lynt = *h - (*h)->next;
		if (lynt > 0)
		{
			gzw = (*h)->next;
			free(*h);
			*h = gzw;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
