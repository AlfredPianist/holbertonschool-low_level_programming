#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to be calculated.
 *
 * Return: the length of the string s.
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	for (; *s != '\0'; s++)
		length++;

	return (length);
}
