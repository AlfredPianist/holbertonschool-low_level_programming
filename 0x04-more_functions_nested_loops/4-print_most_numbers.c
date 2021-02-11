#include "holberton.h"

/**
 * print_most_numbers - prints numbers from 0 to 9, except 2 and 4.
 */
void print_most_numbers(void)
{
	int digit;

	digit = '0';
	while (digit <= '9')
	{
		if (!(digit == ('0' + 2) || digit == ('0' + 4)))
			_putchar(digit);
		digit++;
	}

	_putchar('\n');
}
