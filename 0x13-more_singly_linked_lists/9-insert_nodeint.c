#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be added
 * @n: content of the new node
 *
 * Return: the address of the node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int num;
	listint_t *new_one;
	listint_t *tbf;

	tbf = *head;
	num = 0;
	new_one = malloc(sizeof(listint_t));
	if (new_one == NULL)
		return (NULL);
	new_one->n = n;
	if (index == 0)
	{
		new_one->next = tbf;
		*head = new_one;
		return (new_one);
	}
	if (tbf == NULL)
		return (NULL);
	while (num != (index - 1))
	{
		tbf = tbf->next;
		if (tbf == NULL)
		{
			free(new_one);
			return (NULL);
		}
		num++;
	}
	new_one->next = tbf->next;
	tbf->next = new_one;
	return (new_one);
}
