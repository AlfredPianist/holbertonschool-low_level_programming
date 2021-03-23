#include "lists.h"

/**
 * pop_listint - Returns the data of the first node (head)
 *               and removes it from the list.
 * @head: The list's head.
 *
 * Return: The old head's data (a number).
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n;

	n = (*head)->n;

	new_head = (*head)->next;
	free(*head);
	*head = new_head;

	return (n);
}
