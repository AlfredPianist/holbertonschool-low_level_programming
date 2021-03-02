#include "holberton.h"

/**
 * str_concat - concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: The pointer to the concatenated string or NULL if
 *         failed to allocate memory.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len_s1, len_s2, counter;
	char *cat;

	len_s1 = len_s2 = counter = 0;
	cat = NULL;

	if (s1 != NULL)
	{
		for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
			;
	}
	else
		s1 = "";

	if (s2 != NULL)
	{
		for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
			;
	}
	else
		s2 = "";

	cat = malloc(sizeof(char) * (len_s1 + len_s2) + 1);

	if (cat == NULL)
		return (NULL);

	for (counter = 0; counter < len_s1; counter++)
		cat[counter] = s1[counter];

	for (counter = 0; counter <= len_s2; counter++)
		cat[len_s1 + counter] = s2[counter];

	return (cat);
}
