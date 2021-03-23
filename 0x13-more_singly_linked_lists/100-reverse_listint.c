#include "lists.h"

/**
 * reverse_listint - Reverses the order of a singly linked list.
 * @head: The list's head.
 *
 * Return: The head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node, *next_node;

	if (*head == NULL)
		return (NULL);

	current_node = (*head)->next;
	(*head)->next = NULL;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		current_node->next = *head;
		*head = current_node;
		current_node = next_node;
	}

	return (*head);
}
