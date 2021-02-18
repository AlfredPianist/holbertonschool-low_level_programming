#include "holberton.h"

/**
 * *string_toupper - converts all lowercase characters to uppercase.
 * @s: the source string
 *
 * Return: a pointer to the string converted.
 */
char *string_toupper(char *s)
{
	int index;

	index = 0;

	while (s[index] != '\0')
	{
		if (s[index] >= 97 && s[index] <= 122)
			s[index] = s[index] - 32;
		index++;
	}

	return (s);
}
