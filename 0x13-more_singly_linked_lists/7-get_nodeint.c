#include "lists.h"

/**
 *get_nodeint_at_index - A function that returns the nth node of a linked list
 *@head: A pointer to the address of a struct
 *@index: The index of the node starting at 0
 *Return: NULL if the node does not exist. The address if the node exists
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num;

	num = 0;
	while (head != NULL)
	{
		if (num == index)
			return (head);
		num++;
		head = head->next;
	}
	return (NULL);
}
