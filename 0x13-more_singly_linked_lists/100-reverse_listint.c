#include "lists.h"

/**
 *reverse_listint - A function that reverses a linked list
 *@head: A double pointer that points to the address of the struct
 *
 *Return: NULL if it's an empty list. *head if there is a list to reverse
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pointt;
	listint_t *anth;

	if (*head != NULL)
	{
		anth = pointt = *head;
		anth = anth->next;
		pointt->next = NULL;
		while (anth != NULL)
		{
			pointt = anth;
			anth = anth->next;
			pointt->next = *head;
			*head = pointt;
		}
		return (*head);
	}
	return (NULL);
}
