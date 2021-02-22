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
	unsigned int index_s, index_a, pbreak, len_str;

	pbreak = len_str = 0;

	for (index_s = 0; s[index_s] != '\0'; index_s++)
		pbreak++;
	len_str = pbreak;

	if (len_str == 0)
		return (NULL);

	for (index_a = 0; accept[index_a] != '\0'; index_a++)
	{
		for (index_s = 0; s[index_s] != '\0'; index_s++)
		{
			printf("pbreak %d\n", pbreak);
			if (s[index_s] == accept[index_a] && index_s < pbreak)
			{
				pbreak = index_s;
				break;
			}
		}
	}

	if (pbreak == len_str)
		return (NULL);

	return (s + pbreak);
}
