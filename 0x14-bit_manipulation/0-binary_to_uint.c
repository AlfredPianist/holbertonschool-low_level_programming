#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer
 * @b: The binary number to be converted.
 *
 * Return: The binary number converted to its decimal representation.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number, digits, factor;

	number = digits = 0;
	factor = 1;

	if (b == NULL || (*b == '0' && *(b + 1) == '\0'))
		return (0);

	while (b[digits] != '\0')
	{
		if (digits > 0)
			factor *= 2;
		if (b[digits] < '0' || b[digits] > '1')
			return (0);
		digits++;
	}

	while (*b != '\0')
	{
		number += (*(b++) - '0') * factor;
		factor /= 2;
	}

	return (number);
}
