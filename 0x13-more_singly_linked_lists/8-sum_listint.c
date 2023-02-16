#include "lists.h"
/**
 *sum_listint - a function that returns the sum of all the data (n) of
 *a linked list.
 *@head: a pointer that points to the address of the struct
 *Return: The total of the integers added together
 */
int sum_listint(listint_t *head)
{
	int num;

	if (head == NULL)
		return (0);
	num = 0;
	while (head != NULL)
	{
		num += head->n;
		head = head->next;
	}
	return (num);
}
