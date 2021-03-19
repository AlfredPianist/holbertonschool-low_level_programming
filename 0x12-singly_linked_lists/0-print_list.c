#include "lists.h"

/**
 * print_list - Prints each element of the singly linked list.
 * @h: The list to be printed.
 *
 * Description: Prints each element contained in the singly linked
 *              list. If the element "str" from the list doesn't exist,
 *              then it will print 0, otherwise, it will print the "len"
 *              element.
 * Return: The list size.
 */
size_t print_list(const list_t *h)
{
	size_t list_size;

	list_size = 0;
	while (h != NULL)
	{
		printf("[%u] %s\n", h->str == NULL ? 0 : h->len, h->str);
		list_size++;
		h = h->next;
	}

	return (list_size);
}
