#include "holberton.h"

/**
 * flip_bits - Counts the number of bits flipped to convert from one number
 *             to the other.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits flipped.
 */
int get_endianness(void)
{
	unsigned int check;

	check = 1;

	return ((int) ((char *)&check)[0]);
}

