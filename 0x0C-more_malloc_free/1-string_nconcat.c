#include "holberton.h"

/**
 * string_nconcat - concatenates the firt string with n bytes of
 *               the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The first  n bytes of the second string to concatenate.
 *
 * Return: The pointer to the concatenated string or NULL if
 *         failed to allocate memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, counter;
	char *cat;

	len_s1 = len_s2 = counter = 0;
	cat = NULL;

	if (s1 != NULL)
		for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
			;
	else
		s1 = "";

	if (s2 != NULL)
		for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
			;
	else
		s2 = "";

	if (n < len_s2)
		len_s2 = n;

	cat = malloc(sizeof(*cat) * (len_s1 + len_s2) + 1);

	if (cat == NULL)
		return (NULL);

	for (counter = 0; counter < len_s1; counter++)
		cat[counter] = s1[counter];

	for (counter = 0; counter < len_s2; counter++)
		cat[len_s1 + counter] = s2[counter];

	cat[len_s1 + counter] = '\0';

	return (cat);
}
