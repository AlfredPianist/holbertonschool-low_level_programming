#include "lists.h"

/**
 * add_node - Adds a node at the beginning of the list.
 * @head: The head of the list.
 * @str: The string for the new node's "str".
 *
 * Return: The new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_dup;
	unsigned int len_str;

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

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
