#include "holberton.h"

/**
 * _isalpha - prints if a character is alphabetic.
 * @c: The character to find.
 *
 * Return: 1 if character is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	int letter;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		letter = 1;
	else
		letter = 0;

	return (letter);
}
