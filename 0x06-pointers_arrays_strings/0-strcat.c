#include "holberton.h"

/**
 * *_strcat - concatenates two strings overwriting the NUL character
 *            from the first string.
 * @dest: the destination string.
 * @src: the source string.
 *
 * Return: a pointer of the resulting string.
 */
char *_strcat(char *dest, char *src)
{
	int index, len_dest;

	for (index = 0; dest[index] != '\0'; index++)
		;
	len_dest = index;

	for (index = 0; src[index] != '\0'; index++)
		dest[len_dest + index] = src[index];

	dest[len_dest + index] = '\0';

	return (dest);
}
