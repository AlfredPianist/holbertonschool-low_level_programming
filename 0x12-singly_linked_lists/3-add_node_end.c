#include "lists.h"

/**
 * add_node_end - Adds a node at the end of the list.
 * @head: The head of the list.
 * @str: The string for the new node's "str".
 *
 * Return: The new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	char *str_dup;
	unsigned int len_str;

	last_node = *head;
	new_node = NULL;
	str_dup = NULL;
	len_str = 0;

	while (str[len_str++] != '\0')
		;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	str_dup = strdup(str);

	new_node->str = str_dup;
	new_node->len = len_str - 1;
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
