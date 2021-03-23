#include "lists.h"

/**
 * listint_len - Returns the number of elements of a singly linked list.
 * @h: The list's head.
 *
 * Return: The number of elements of the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t list_size;

	list_size = 0;
	while (h != NULL)
	{
		list_size++;
		h = h->next;
	}

	return (list_size);
}
