#include "lists.h"

/**
 * insert_nodeint_at_index - Returns the new node inserted at a given index,
 *                           or NULL if index non-existent or failed to
 *                           allocate memory.
 * @head: The list's head.
 * @idx: The index of the node to be inserted.
 * @n: The data of the node (a number).
 *
 * Return: The new node inserted at index "idx" or NULL if idx non-existent or
 *         failed to allocate memory.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i_count;
	listint_t *new_node, *current_node;

	i_count = 0;
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	while (i_count < idx - 1)
	{
		if (current_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current_node = current_node->next;
		i_count++;
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
