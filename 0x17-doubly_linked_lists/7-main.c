#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;

	printf("Adding on impossible index and HEAD NULL.\n");
	insert_dnodeint_at_index(&head, 5, 8000);
	print_dlistint(head);
	printf("-----------------\n");

	printf("Adding on index 0 and HEAD NULL.\n");
	insert_dnodeint_at_index(&head, 0, 9000);
	print_dlistint(head);
	printf("-----------------\n");

	printf("Adding on index 1 (after last).\n");
	insert_dnodeint_at_index(&head, 1, 2000);
	print_dlistint(head);
	printf("-----------------\n");

	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("-----------------\n");

	printf("Adding on index 5.\n");
	insert_dnodeint_at_index(&head, 5, 4096);
	print_dlistint(head);
	printf("-----------------\n");

	printf("Adding on index 10 (last).\n");
	insert_dnodeint_at_index(&head, 10, 100000);
	print_dlistint(head);
	printf("-----------------\n");

	printf("Adding on impossible index.\n");
	insert_dnodeint_at_index(&head, 14, 100000);
	print_dlistint(head);

	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
