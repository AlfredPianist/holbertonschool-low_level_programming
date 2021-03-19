#include "lists.h"

/**
 * free_list - Frees all the nodes on the linked list.
 * @head: The head of the list to be freed.
 */
void free_list(list_t *head)
{
	list_t *current_node, *next_node;

	next_node = NULL;
	current_node = head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
	head = NULL;
}
