#include "lists.h"

/**
 * print_listint - Prints the contents of the singly linked list and returns
 *                 its number of elements.
 * @h: The list's head.
 *
 * Return: The number of elements of the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t list_size;

	list_size = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		list_size++;
		h = h->next;
	}

	return (list_size);
}
