#include "lists.h"

/**
*free_listint2 - frees a linked list
*@head: pointer to the head of the list
*
*Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *tbf;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			tbf = *head;
			*head = (*head)->next;
			free(tbf);
		}
		*head = NULL;
	}

}
