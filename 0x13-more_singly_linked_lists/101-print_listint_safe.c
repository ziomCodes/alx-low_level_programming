#include "lists.h"

/**
 *new_nodelist - A function that mallocs a new space for a list
 *@head: A double pointer that points to my second list header, head_2.
 *@addr: pointer to addr in po_list
 *
 *Return: return new_node
 */

po_list *new_nodelist(po_list **head, const void *addr)
{
	po_list *add_node;

	add_node = malloc(sizeof(po_list));
	if (add_node == NULL)
	{
		free_listN(*head);
		exit(98);
	}
	add_node->addr = addr;
	add_node->next = *head;
	*head = add_node;
	return (add_node);
}

/**
 *free_listN - a function that frees a linked list
 *@head: a pointer variable that points to the start of a newly made list
 */

void free_listN(po_list *head)
{
	po_list *point_node;

	while (head != NULL)
	{
		point_node = head;
		head = head->next;
		free(point_node);
	}
}

/**
 *print_listint_safe - a function that prints the node and the
 *number within a node,
 *@head: pointer pointing to structlist
 *
 *Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	po_list *point_newnode;
	po_list *head2;
	size_t num;

	num = 0;
	head2 = NULL;
	while (head != NULL)
	{
		point_newnode = head2;
		while (point_newnode != NULL)
		{
			if (head == point_newnode->addr)
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free_listN(head2);
				return (num);
			}
			point_newnode = point_newnode->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		new_nodelist(&head2, head);
		head = head->next;
		num++;
	}
	free_listN(head2);
	return (num);
}
