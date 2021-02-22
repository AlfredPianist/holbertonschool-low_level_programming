#include "holberton.h"

/**
 * *_memset - fills memory with a constant byte set by n.
 * @s: the destination string.
 * @b: constant byte to be set.
 * @n: nuimber of bytes.
 *
 * Return: a pointer of the resulting string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
