#include "lists.h"

/**
  * print_list - Prints all elements of a list
  * @h: A linked list
  *
  * Return: The number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t num = 0;
	const list_t *pointt = h;

	while (pointt)
	{
		if (!pointt->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", pointt->len, pointt->str);
		pointt = pointt->next;
		num++;
	}

	return (num);
}
