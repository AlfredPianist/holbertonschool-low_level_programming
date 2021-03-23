#include "lists.h"

/**
 * add_node_endadd - Adds an address node at the end of a singly linked list.
 * @head: The list's head.
 * @add: The new node's address.
 *
 * Return: The address of the new element, or NULL if failed.
 */
listadd_t *add_node_endadd(listadd_t **head, void *add)
{
	listadd_t *new_node, *last_node;

	last_node = *head;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->add = add;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;

	return (new_node);
}

/**
 * find_nodeadd - Finds if a value is already existent in the singly-linked
 *                list.
 * @head: The list's head.
 * @add: The address to be found.
 *
 * Return: 1 if found, 0 otherwise.
 */
short find_nodeadd(listadd_t **head, void *add)
{
	listadd_t *current_node;

	current_node = *head;
	while (current_node != NULL)
	{
		if ((current_node)->add == add)
			return (1);
		current_node = current_node->next;
	}
	return (0);
}

/**
 * free_listadd - Frees the singly-linked list.
 * @head: The list's head.
 */
void free_listadd(listadd_t **head)
{
	listadd_t *next_node;

	if (head == NULL)
		return;

	next_node = (*head)->next;
	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
	*head = NULL;
}

/**
 * print_listint_safe - Prints singly linked lists and circular
 *                      singly linked lists.
 * @head: The list's head.
 *
 * Return: The number of nodes of the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	listadd_t *head_add;
	size_t list_size;
	short flag;

	list_size = flag = 0;
	head_add = NULL;

	if (head == NULL)
		return (0);

	while (head != NULL && flag == 0)
	{
		add_node_endadd(&head_add, (void *) head);
		printf("[%p] %d\n", (void *) head, head->n);
		if (find_nodeadd(&head_add, (void *) head->next) == 1)
		{
			printf("-> [%p] %d\n", (void *) head, head->next->n);
			flag = 1;
		}
		head = head->next;
		list_size++;
	}

	free_listadd(&head_add);
	return (list_size);
}
