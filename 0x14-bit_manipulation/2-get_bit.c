#include "holberton.h"

/**
 * get_bit - Returns the bit of a number given an index.
 * @n: The decimal number to be searched for the bit.
 * @index: The index of the bit.
 *
 * Return: The bit, or -1 if unsuccessful.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);
	else
		return (1);
}
