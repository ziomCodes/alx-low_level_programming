#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *adng;
	unsigned int num = 0;

	while (str[num])
		num++;

	adng = malloc(sizeof(list_t));
	if (!adng)

		return (NULL);

	adng->str = strdup(str);
	adng->len = num;
	adng->next = (*head);
	(*head) = adng;

	return (*head);
}
