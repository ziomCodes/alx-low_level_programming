#include "lists.h"
#include <stdio.h>

size_t listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */

size_t listint_len(const listint_t *head)
{
	const listint_t *slw, *fst;
	size_t doss = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slw = head->next;
	fst = (head->next)->next;

	while (fst)
	{
		if (slw == fst)
		{
			slw = head;
			while (slw != fst)
			{
				doss++;
				slw = slw->next;
				fst = fst->next;
			}
			slw = slw->next;
			while (slw != fst)
			{
				doss++;
				slw = slw->next;
			}

			return (doss);
		}

		slw = slw->next;
		fst = (fst->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t doss, num = 0;

	doss = listint_len(head);

	if (doss == 0)
	{
		for (; head != NULL; doss++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (num = 0; num < doss; num++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (doss);
}
