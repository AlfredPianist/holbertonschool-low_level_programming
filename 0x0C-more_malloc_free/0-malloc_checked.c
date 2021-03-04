#include "holberton.h"

/**
 * malloc_checked - Checks if a chunk of memory can be allocated.
 * @b: The size in bytes of the chunk of memory to be allocated.
 *
 * Return: A pointer to the address if successful at allocating memory.
 *         Otherwise, exits the program with exit code 98.
 */
void *malloc_checked(unsigned int b)
{
	void *p_alloc;

	p_alloc = NULL;

	p_alloc = malloc(b);
	if (p_alloc == NULL)
		exit(98);

	return (p_alloc);
}
