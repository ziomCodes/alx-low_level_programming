#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sloth = head;
	listint_t *bolt = head;

	if (!head)
		return (NULL);

	while (sloth && bolt && bolt->next)
	{
		bolt = bolt->next->next;
		sloth = sloth->next;
		if (bolt == sloth)
		{
			sloth = head;
			while (sloth != bolt)
			{
				sloth = sloth->next;
				bolt = bolt->next;
			}
			return (bolt);
		}
	}

	return (NULL);
}
