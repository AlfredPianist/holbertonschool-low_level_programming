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
