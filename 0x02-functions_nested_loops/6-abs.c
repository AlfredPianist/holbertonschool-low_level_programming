#include "holberton.h"

/**
 * _abs - prints the absolute value of a number.
 * @n: The integer to evaluate.
 *
 * Return: the absolute value of a number.
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;

	return (n);
}
