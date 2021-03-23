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
	size_t list_size;
	listint_t *current_node, *next_node;
	short flag;

	list_size = flag = 0;
	if (*h == NULL)
		return (0);

	next_node = NULL;
	current_node = *h;
	while (current_node != NULL && flag == 0)
	{
		next_node = current_node->next;
		if (current_node <= next_node)
			flag = 1;
		free(current_node);
		list_size++;
		current_node = next_node;
	}
	*h = NULL;

	return (list_size);
}
