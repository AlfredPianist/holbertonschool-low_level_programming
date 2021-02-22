#include "holberton.h"

/**
 * rot13 - converts a string to rot13 cypher.
 * @s: the source string
 *
 * Return: a pointer to the string converted.
 */
void print_diagsums(int *a, int size)
{
	int index_a, diag_ud, diag_du;

	index_a = diag_ud = diag_du = 0;

	while (index_a < size)
	{
		diag_ud += a[index_a * (size + 1)];
		diag_du += a[(index_a + 1) * (size - 1)];
		index_a++;
	}

	printf("%d, %d\n", diag_ud, diag_du);
}
