#include "lists.h"

/**
 * print_listint_safe - Prints singly linked lists and circular
 *                      singly linked lists.
 * @head: The list's head.
 *
 * Return: The number of nodes of the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t list_size;
	short flag;

	list_size = flag = 0;
	if (head == NULL)
		exit(98);

	while (head != NULL && flag == 0)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *) head->next, head->next->n);
			flag = 1;
		}
		list_size++;
		head = head->next;
	}

	return (list_size);
}
