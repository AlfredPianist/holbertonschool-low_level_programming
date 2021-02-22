#include "holberton.h"

/**
 * *_strncat - concatenates two strings overwriting the NUL character
 *             from the first string, but using at most n bytes from src.
 * @dest: the destination string.
 * @src: the source string.
 * @n: the number of bytes to be used from src.
 *
 * Return: a pointer of the resulting string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
