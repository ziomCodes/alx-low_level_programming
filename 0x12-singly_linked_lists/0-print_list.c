#include "lists.h"

/**
 * print_list - print all elements of `list_t` list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *pnt = h;
	size_t num = 0;

	while (pnt != NULL)
	{
	if (pnt->str != NULL)
		printf("[%d] %s\n", pnt->len, pnt->str);
	else
		printf("[0] (nil)\n");
		num += 1;
		pnt = pnt->next;
	}

	return (num);
}
