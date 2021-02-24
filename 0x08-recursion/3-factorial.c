#include "holberton.h"

/**
 * factorial - returns the factorial of a number recursively.
 * @n: the number to be operated.
 *
 * Return: n!
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
