#include "lists.h"

/**
 * add_node_endadd - Adds an address node at the end of a singly linked list.
 * @head: The list's head.
 * @add: The new node's address.
 *
 * Return: The address of the new element, or NULL if failed.
 */
listadd_t *add_node_endadd(listadd_t **head, void *add);

/**
 * find_nodeadd - Finds if a value is already existent in the singly-linked
 *                list.
 * @head: The list's head.
 * @add: The address to be found.
 *
 * Return: 1 if found, 0 otherwise.
 */
short find_nodeadd(listadd_t **head, void *add);

/**
 * free_listadd - Frees the singly-linked list.
 * @head: The list's head.
 */
void free_listadd(listadd_t **head);

/**
 * find_listint_loop - Returns the address of the node when the loop starts
 *                     on a circular singly linked list, NULL if head doesn't
 *                     exist or not a circular singly linked list.
 * @head: The list's head.
 *
 * Return: The address of the node when the loop starts, or NULL if head non-
 *         existent or not a circular singly linked list.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listadd_t *head_add;

	head_add = NULL;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		add_node_endadd(&head_add, (void *) head);
		if (find_nodeadd(&head_add, (void *) head->next) == 1)
		{
			free_listadd(&head_add);
			return (head->next);
		}
		head = head->next;
	}

	free_listadd(&head_add);
	return (NULL);
}
