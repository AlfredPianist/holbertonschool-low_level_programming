#include "holberton.h"

/**
 * _isdigit - checks if character is digit.
 * @c: the character to be checked.
 *
 * Description: checks if a character is digit and returns 1 if
 *              it is and 0 otherwise.
 * Return: 1 if digit, 0 otherwise.
 */
int _isdigit(int c)
{
	int isdigit;

	if (c >= 48 && c <= 57)
		isdigit = 1;
	else
		isdigit = 0;

	return (isdigit);
}
