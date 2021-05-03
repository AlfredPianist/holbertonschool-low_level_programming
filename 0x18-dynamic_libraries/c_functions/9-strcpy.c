#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to by src to dest
 * @dest: the destination of the copied string.
 * @src: the string to be copied.
 *
 * Return: the pointer of the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int length;

	length = 0;

	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
		length++;
	}
	*dest = '\0';
	dest -= length;

	return (dest);
}
