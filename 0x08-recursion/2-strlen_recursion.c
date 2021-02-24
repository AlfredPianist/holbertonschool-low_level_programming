#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string in a recursive manner.
 * @s: the string to be print.
 *
 * Return: the length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(++s));
	return (0);
}
