#include "holberton.h"

/**
 * _strdup - duplicates a string.
 * @str: The original string to be duplicated.
 *
 * Return: The pointer to the allocated array, or NULL if str is NULL
 *         or failed to allocate memory.
 */
char *_strdup(char *str)
{
	unsigned int len, counter;
	char *cpy;

	len = counter = 0;
	cpy = NULL;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	cpy = malloc(sizeof(char) * len + 1);
	for (counter = 0; counter < len; counter++)
		cpy[counter] = str[counter];

	return (cpy);
}
