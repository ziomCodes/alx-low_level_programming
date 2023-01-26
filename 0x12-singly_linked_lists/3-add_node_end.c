#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *adng;
	list_t *samp = *head;
	unsigned int num = 0;

	while (str[num])
		num++;

	adng = malloc(sizeof(list_t));
	if (!adng)
		return (NULL);

	new->str = strdup(str);
	new->len = num;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = adng;
		return (adng);
	}

	while (samp->next)
		samp = samp->next;

	samp->next = adng;

	return (adng);
}
