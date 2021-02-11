#include "holberton.h"

/**
 * more_numbers - prints numbers from 0 to 14.
 */
void more_numbers(void)
{
	int digit_one, digit_two, digit, times;

	digit_one = '0';
	digit_two = '1';
	digit = 0;

	for (times = 0; times < 10; times++)
	{
		while (digit <= 14)
		{
			if (digit > 9)
				_putchar(digit_two);
			_putchar(digit_one + (digit % 10));
			if (digit == 9)
				digit_one = '0';
			digit++;
		}
		digit = 0;
		_putchar('\n');
	}
}
