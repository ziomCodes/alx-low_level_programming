#include "lists.h"

/**
 *add_nodeint - Adds a new node at the beginning
 *of a listint_t list
 *@head: A pointer to the address of the head of the listint_t list
 *@n: the integer for the new node to contain
 *
 *Return: NULL if function fails
 *Or address of element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *adis;

	adis = malloc(sizeof(listint_t));
	if (adis == NULL)
		return (NULL);

	adis->n = n;
	adis->next = *head;

	*head = adis;

	return (adis);
}
