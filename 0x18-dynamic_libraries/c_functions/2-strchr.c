#include "holberton.h"

/**
 * *_strchr - locates a character in a string.
 * @s: the source string.
 * @c: the character to be located in a string.
 *
 * Return: a pointer of the resulting string.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);

	return (NULL);
}
