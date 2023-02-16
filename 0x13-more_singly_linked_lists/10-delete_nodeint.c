#include "lists.h"

/**
 *delete_nodeint_at_index - A function that deletes the
 * node at index of a linked list
 *@head: a double pointer pointing to a struct
 *@index: the index of the node to be deleted
 *
 *Return: 1 if successful -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tbf;
	listint_t *tbf2;
	unsigned int num;

	num = 0;
	tbf = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tbf->next;
		free(tbf);
		return (1);
	}
	while (num != index)
	{
		tbf2 = tbf;
		tbf = tbf->next;
		if (tbf == NULL)
			return (-1);
		num++;
	}
	tbf2->next = tbf->next;
	free(tbf);
	return (1);
}
