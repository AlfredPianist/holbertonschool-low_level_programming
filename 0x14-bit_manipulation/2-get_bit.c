#include "holberton.h"

/**
 * get_bit - Returns the bit of a number given an index.
 * @b: The decimal number to be searched for the bit.
 * @index: The index of the bit.
 *
 * Return: The bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((n & (1 << index)) == 0)
		return (0);
	else
		return (1);
}
