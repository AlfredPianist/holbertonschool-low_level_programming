#include "holberton.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: the source string.
 * @accept: the substring of accepted characters.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int index_s, index_a;
	char *res = NULL;

	for (index_s = 0; s[index_s] != '\0' && res == NULL; index_s++)
	{
		for (index_a = 0; accept[index_a] != '\0'; index_a++)
		{
			if (s[index_s] == accept[index_a])
			{
				res = s + index_s;
				break;
			}
		}
	}

	return (res);
}
