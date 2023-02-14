#include "lists.h"

/**
 *pop_listint - a function that deletes the head node of a linked list
 *and returns the head node's data (n)
 *@head: a double pointer that takes the address of the struct
 *Return: The value stored in the head's node
 */

int pop_listint(listint_t **head)
{
	listint_t *tbf;
	int doss;

	if (*head == NULL)
		return (0);
	if (*head != NULL)
	{
		tbf = *head;
		doss = (*head)->n;
		*head = (*head)->next;
		free(tbf);
	}
	return (doss);
}
