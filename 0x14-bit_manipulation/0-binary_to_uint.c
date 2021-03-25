#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer
 * @b: The binary number to be converted.
 *
 * Return: The binary number converted to its decimal representation, or 0
 *         if unsuccessful.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number, factor;
	int counter;

	number = counter = factor = 0;

	if (b == NULL || (*b == '0' && *(b + 1) == '\0'))
		return (0);

	while (b[counter] != '\0')
	{
		if (b[counter] < '0' || b[counter] > '1')
			return (0);
		counter++;
	}
	counter--;

	while (counter >= 0)
	{
		/*
		 * Remember that the shifting means that bit shifted left by the factor
		 * represents 2**factor, so that summed to whatever I have already stored
		 * is indeed the representation of the number in decimal.
		 */
		if (b[counter--] == '1')
			number += 1 << factor;
		factor++;
	}

	return (number);
}
