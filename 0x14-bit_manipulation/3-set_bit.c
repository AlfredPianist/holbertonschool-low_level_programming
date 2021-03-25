#include "holberton.h"

/**
 * set_bit - Sets a given bit from an index to 1.
 * @n: The decimal number to be modified.
 * @index: The index of the bit.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}

