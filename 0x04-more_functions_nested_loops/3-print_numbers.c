#include "holberton.h"

/**
 * print_numbers - prints numbers from 0 to 9.
 */
void print_numbers(void)
{
	int digit;

	digit = '0';
	while (digit <= '9')
	{
		_putchar(digit);
		digit++;
	}

	_putchar('\n');
}
