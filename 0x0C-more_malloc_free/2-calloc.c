#include "holberton.h"

/**
 * _calloc - allocates memory and initializes with zeroes.
 * @nmemb: The amount of elements to be allocated.
 * @size: The size of each nmemb element.
 *
 * Return: A pointer to the address if successful at allocating memory.
 *         Otherwise, returns NULL. NULL if nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p_alloc;
	unsigned int counter;

	p_alloc = NULL;
	counter = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p_alloc = malloc(size * nmemb);
	if (p_alloc == NULL)
		return (NULL);

	for (counter = 0; counter < size * nmemb; counter++)
		((char *) p_alloc)[counter] = '\0';
	return (p_alloc);
}
