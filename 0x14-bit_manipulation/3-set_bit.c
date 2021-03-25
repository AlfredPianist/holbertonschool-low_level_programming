#include "holberton.h"

/**
 * set_bit - Sets a given bit from an index to 1.
 * @n: The decimal number to be modified.
 * @index: The index of the bit.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Maximum 64 bits for unsigned long int (63 beginning from 0) */
	if (index > 63)
		return (-1);

	/*
	 * In order to set the specific bit to 1, we have to create a bitmask
	 * of 1 shifted the index times of the bit wanted to set and, and using
	 * |, will be set to 1 no matter if it is 0 or 1.
	 */
	*n |= (1 << index);

	return (1);
}

