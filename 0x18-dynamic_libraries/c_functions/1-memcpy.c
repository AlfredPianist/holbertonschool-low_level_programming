#include "holberton.h"

/**
 * *_memcpy - copies a memory area.
 * @dest: the destination string.
 * @src: the source memory area.
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
