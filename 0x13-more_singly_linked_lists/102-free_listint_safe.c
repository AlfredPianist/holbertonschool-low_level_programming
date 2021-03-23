#include "lists.h"

/**
 * free_listint_safe - Frees all nodes from a singly linked or
 *                     circular singly linked list.
 * @h: The list's head.
 *
 * Return: The number of nodes of the list freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next_node;
	listadd_t *head_add;
	size_t list_size;
	short flag;

	list_size = flag = 0;
	head_add = NULL;

	if (*h == NULL)
		return (0);

	next_node = (*h)->next;
	while (*h != NULL && flag == 0)
	{
		add_node_endadd(&head_add, (void *) *h);
		if (find_nodeadd(&head_add, (void *) (*h)->next) == 1)
			flag = 1;
		next_node = (*h)->next;
		free(*h);
		*h = next_node;
		list_size++;
	}
	*h = NULL;

	free_listadd(&head_add);
	return (list_size);
}
