#include "holberton.h"

/**
 * _strdup - duplicates a string.
 * @str: The original string to be duplicated.
 *
 * Return: The pointer to the allocated array, or NULL if str is NULL
 *         or failed to allocate memory.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len_s1, len_s2, counter;
	char *cat;

	len_s1 = len_s2 = counter = 0;
	cat = NULL;

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;

	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	cat = malloc(sizeof(char) * (len_s1 + len_s2) + 1);

	if (cat != NULL)
	{
		for (counter = 0; counter < len_s1; counter++)
			cat[counter] = s1[counter];

		for (counter = 0; counter < len_s2; counter++)
			cat[len_s1 + counter] = s2[counter];
	}

	return (cat);
}
