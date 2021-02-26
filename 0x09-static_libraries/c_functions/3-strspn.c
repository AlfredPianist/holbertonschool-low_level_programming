#include "holberton.h"

/**
 * *_strspn - gets the length of a prefix substring.
 *
 * Description: 0 if first character doesn't exist.
 * @s: the source string.
 * @accept: the substring of accepted characters.
 *
 * Return: the length of the substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index_s, index_a;

	for (index_s = 0; s[index_s] != '\0'; index_s++)
	{
		for (index_a = 0; accept[index_a] != '\0'; index_a++)
		{
			if (s[index_s] == accept[index_a])
				break;
		}
		if (accept[index_a] == '\0')
			break;
	}

	return (index_s);
}
