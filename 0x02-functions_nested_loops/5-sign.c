#include "holberton.h"

/**
 * print_sign - finds if an integer is positive, negative or zero.
 *         Also prints its sign.
 * @n: The integer to find.
 *
 * Return: 1 if integer is positive, 0 if zero, and -1 if negative.
 */
int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		sign = 0;
		_putchar('0');
	}
	else
	{
		sign = -1;
		_putchar('-');
	}

	return (sign);
}
