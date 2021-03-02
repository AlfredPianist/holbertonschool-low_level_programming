#include "holberton.h"

/**
 * create_array - creates an array of size "size" and initialize it with c.
 * @size: The size of the array.
 * @c: The character which will initialize the array.
 *
 * Return: The pointer to the allocated array, or NULL if failed to allocate
 *         memory.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int counter;
	char *array;

	counter = 0;
	array = malloc(sizeof(char) * size + 1);

	if (size <= 0 || array == NULL)
		return (NULL);

	for (counter = 0; counter <= size; counter++)
		array[counter] = c;

	return (array);
}
