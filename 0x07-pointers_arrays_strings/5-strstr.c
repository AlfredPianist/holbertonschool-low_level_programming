#include "holberton.h"

/**
 * *_strstr - locates a specific substring from a string.
 * @haystack: the source string.
 * @needle: the substring to be located.
 *
 * Return: a pointer to the substring from haystack or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int index_h, index_n, len_needle;
	char *res = NULL;

	len_needle = 0;
	for (index_n = 0; needle[index_n] != '\0'; index_n++)
		len_needle++;

	for (index_h = 0; haystack[index_h] != '\0' && res == NULL; index_h++)
	{
		for (index_n = 0; needle[index_n] != '\0'; index_n++)
			if (haystack[index_h + index_n] != needle[index_n])
				break;
		if (len_needle - 1 == index_n - 1)
			return (haystack + index_h);
	}

	return (res);
}
