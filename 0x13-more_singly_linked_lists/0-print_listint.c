#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *pointt = h;
	size_t num = 0;

	while (pointt != NULL)
		{
		printf("%d\n", pointt->n);
		num += 1;
		pointt = pointt->next;
		}
return (num);
}
