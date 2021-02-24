#include "holberton.h"

/**
 * _strlen - returns the length of a string in a recursive manner.
 * @s: the string to be print.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + _strlen(++s));
	return (0);
}

/**
 * _prime - helper function for is_prime_number. Keeps n as part of the
 *          funtion.
 * @n: the number to be found its prime quality.
 * @temp: a temporal divisor. If n % temp == 0, then n is not prime.
 *
 * Return: 1 of prime, 0 otherwise.
 */
int _palindrome(char *s, int len, int stop)
{
	if (*s != *(s + len))
		return (0);
	if (len <= stop)
		return (_palindrome(s + 1, len - 2, stop));
	return (1);
}

/**
 * is_palindrome - returns if a string is palindromic.
 * @s: the string to be operated.
 *
 * Return: the helper function _prime(n, 5)
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);

	if (len == 0 || len == 1)
		return (1);
	return (_palindrome(s, len - 1, len / 2));
}
