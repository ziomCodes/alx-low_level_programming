#include "lists.h"

/**
 *add_nodeint_end - adds a node to the end of a linked list
 *@head: pointer to the head of the list
 *@n: number to be used as content
 *
 *Return: address of the newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *adis_doss;
	listint_t *pointt = *head;

	adis_doss = malloc(sizeof(listint_t));
	if (adis_doss != NULL)
	{
		adis_doss->n = n;
		adis_doss->next = NULL;
	}
	else
		return (NULL);
	if (pointt != NULL)
	{
		while (pointt->next != NULL)
			pointt = pointt->next;

		pointt->next = adis_doss;
	}
	else
		*head = adis_doss;
	return (adis_doss);
}
