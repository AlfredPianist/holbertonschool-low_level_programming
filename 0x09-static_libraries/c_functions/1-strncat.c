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
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, len_src, counter;

	len_dest = len_src = counter = 0;

	while (*(dest + len_dest) != '\0')
		len_dest++;

	while (*(src + len_src) != '\0')
		len_src++;

	if (n > len_src)
		n = len_src;

	if (n >= 0)
	{
		while (counter < n)
		{
			*(dest + counter + len_dest) = *(src + counter);
			counter++;
		}
		/* *dest = '\0'; */
	}

	return (dest);
}
