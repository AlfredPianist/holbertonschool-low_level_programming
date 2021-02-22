#include "holberton.h"

/**
 * *_strncpy - copies a string, printing NUL characters if the size of
 *             destination is large enough, or cropping otherwise.
 * @dest: the destination string.
 * @src: the source string.
 * @n: the size of the destination string.
 *
 * Return: a pointer of the resulting string.
 */
char *_strchr(char *s, char c)
{
	short flag;

	flag = 0;
	while (*s != '\0' && flag == 0)
	{
		if (c == *s)
			flag = 1;
		s++;
	}

	if (flag == 0)
		return (NULL);

	return (--s);
}
