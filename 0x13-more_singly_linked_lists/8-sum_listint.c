#include "lists.h"

/**
 * sum_listint - Returns the sum of the elements of all the nodes.
 * @head: The list's head.
 *
 * Return: The sum of the elements of all the nodes.
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current_node;

	current_node = head;
	sum = 0;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
