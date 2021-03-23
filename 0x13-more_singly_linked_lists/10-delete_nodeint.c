#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index. Returns
 *                           1 if success, -1 if failure.
 * @head: The list's head.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if success, -1 if failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i_count;
	listint_t *current_node, *tmp;

	i_count = 0;
	current_node = *head;

	if (current_node == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
	}
	else
	{
		while (i_count < index - 1)
		{
			if (current_node == NULL)
				return (-1);
			current_node = current_node->next;
			i_count++;
		}
		tmp = current_node->next;
		current_node->next = tmp->next;
		free(tmp);
	}

	return (1);
}
