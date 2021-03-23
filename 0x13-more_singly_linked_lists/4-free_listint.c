#include "lists.h"

/**
 * free_listint - Frees the entire singly linked list.
 * @head: The list's head.
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	current_node = head;

	while (current_node != NULL)
	{
		current_node = head->next;
		free(head);
		head = current_node;
	}
}
