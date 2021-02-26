#include "holberton.h"

/**
 * _isupper - checks if character is uppercase.
 * @c: the character to be checked.
 *
 * Description: checks if a character is uppercase and returns 1 if
 *              uppercase and 0 otherwise.
 * Return: 1 if uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	int isupper;

	if (c >= 65 && c <= 90)
		isupper = 1;
	else
		isupper = 0;

	return (isupper);
}
