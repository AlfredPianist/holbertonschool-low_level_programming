#include "holberton.h"

/**
 * print_binary - Converts a decimal number to its binary representation
 * @n: The decimal number to be converted.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	short one;

	one = 0;

	/* Mask is set to 2**63 (1 followed by 63 zeroes in binary). */
	mask = 9223372036854775808u;

	if (n == 0)
		_putchar ('0');
	/*
	 * This mask will shift right 1 bit at a time and do a bitwise AND with
	 * the number, checking if the number's binary value at the bit aligned with
	 * the 1 of the mask shifted right is 0. If it is, then prints the
	 * corresponding 0 at that bit, if not, prints 1.
	 */
	else
	{
		while (mask > 0)
		{
			if ((n & mask) == 0)
			{
				/* Needed to not show binary 0's previous to the first 1. */
				if (one == 1)
					_putchar('0');
			}
			else
			{
				_putchar('1');
				one = 1;
			}
			mask = mask >> 1;
		}
	}
}
