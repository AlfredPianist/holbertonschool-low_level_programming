#include "holberton.h"

/**
 * _sqrt - helper function for _sqrt_recursion. Keeps n as part of the
 *         function.
 * @n: the number whose square root must be found.
 * @temp: a temporal int acting as square root of n.
 *
 * Return: sqrt(n).
 */
int _sqrt(int n, int temp)
{
	if (temp * temp < n)
		return (_sqrt(n, temp + 1));
	if (temp * temp > n)
		return (-1);
	return (temp);
}

/**
 * _sqrt_recursion - returns the natural square root of a number recursively.
 * @n: the number whose square root must be found.
 *
 * Return: The helper function _sqrt(n, 0).
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
