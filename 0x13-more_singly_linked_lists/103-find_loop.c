#include "lists.h"

/**
 * find_listint_loop - Returns the address of the node when the loop starts
 *                     on a circular singly linked list, NULL if head doesn't
 *                     exist or not a circular singly linked list.
 * @head: The list's head.
 *
 * Return: The address of the node when the loop starts, or NULL if head non-
 *         existent or not a circular singly linked list.
 */
listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (head <= head->next)
			return (head->next);
		head = head->next;
	}
	return (NULL);
}
