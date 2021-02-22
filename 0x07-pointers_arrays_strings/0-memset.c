#include "holberton.h"

/**
 * *_memset - concatenates two strings overwriting the NUL character
 *            from the first string.
 * @dest: the destination string.
 * @src: the source string.
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
