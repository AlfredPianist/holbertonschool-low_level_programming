#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at the requested index.
 * @head: The list's head.
 * @index: The index of the requested node.
 *
 * Return: The node at the requested index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i_count;
	listint_t *current_node;

	current_node = head;
	i_count = 0;

	while (i_count != index)
	{
		if (current_node == NULL)
			return (NULL);
		current_node = current_node->next;
		i_count++;
	}

	return (current_node);
}
