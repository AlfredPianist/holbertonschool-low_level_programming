#include "lists.h"

/**
 * sum_dlistint - Sums the contents of each node of a doubly linked list.
 * @head: The head of the list.
 *
 * Return: The result of the sum.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int res = 0;

	while (current)
	{
		res += current->n;
		current = current->next;
	}
	return (res);
}
