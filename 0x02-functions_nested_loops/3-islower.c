#include "holberton.h"

/**
 * _islower - prints if a letter is lowercase.
 * @c: The character to find.
 *
 * Return: 1 if letter is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	int lower;

	if (c >= 97 && c <= 122)
		lower = 1;
	else
		lower = 0;

	return (lower);
}
