#include "holberton.h"

/**
 * _prime - helper function for is_prime_number. Keeps n as part of the
 *          funtion.
 * @n: the number to be found its prime quality.
 * @temp: a temporal divisor. If n % temp == 0, then n is not prime.
 *
 * Return: 1 of prime, 0 otherwise.
 */
int _prime(int n, int temp)
{
	if (temp * temp > n)
		return (1);
	if (n % temp == 0 || n % (temp + 2) == 0)
		return (0);
	return (_prime(n, temp + 6));
}

/**
 * is_prime_number - returns if a number n is prime recursively.
 * @n: the number to be found its prime quality.
 *
 * Return: the helper function _prime(n, 5)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	return (_prime(n, 5));
}
