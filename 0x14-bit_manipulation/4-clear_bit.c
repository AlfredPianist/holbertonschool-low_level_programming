#include "holberton.h"

/**
 * clear_bit - Sets a given bit from an index to 0.
 * @n: The decimal number to be modified.
 * @index: The index of the bit.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Maximum 64 bits for unsigned long int (63 beginning from 0) */
	if (index > 63)
		return (-1);

	/*
	 * In order to clear the specific bit, we have to create a bitmask
	 * of 1 shifted the index times of the bit wanted to clear and invert
	 * it so only the bit wanted to set to 0 is indeed 0, and using
	 * &, will be set to 0.
	 */
	*n &= ~(1 << index);

	return (1);
}

