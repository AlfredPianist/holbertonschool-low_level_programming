#include "holberton.h"

/**
 * flip_bits - Counts the number of bits flipped to convert from one number
 *             to the other.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_flips, num_flipped;

	bit_flips = 0;
	/*
	 * To know the number of bits I have to flip, I've got to know
	 * which stay put, and the XOR works for that: it tells me with 0
	 * which bytes are not flipped and with 1 which are.
	 */
	num_flipped = n ^ m;

	if (n == m)
		return (0);

	/*
	 * To know how many bytes I've got to flip, I shift right the XOR'ed
	 * number 1 bit at a time and check with AND which are 1 and add it to
	 * my result.
	 */
	while (num_flipped > 0)
	{
		bit_flips += num_flipped & 1;
		num_flipped >>= 1;
	}

	return (bit_flips);
}

