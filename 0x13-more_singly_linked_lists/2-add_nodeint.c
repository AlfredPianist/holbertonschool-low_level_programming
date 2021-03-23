#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning of a singly linked list.
 * @head: The list's head.
 * @n: The new node's number.
 *
 * Return: The address of the new element, or NULL if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
