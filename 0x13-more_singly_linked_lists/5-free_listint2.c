#include "lists.h"

/**
 * free_listint2 - Another version of freeing a singly linked list.
 * @head: The list's head.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node, *next_node;

	next_node = NULL;
	current_node = *head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	*head = NULL;
}
