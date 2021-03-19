#include "lists.h"

/**
 * list_len - Lists the number of nodes of the singly linked list.
 * @h: The list to be calculated.
 *
 * Return: The list size.
 */
size_t list_len(const list_t *h)
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
