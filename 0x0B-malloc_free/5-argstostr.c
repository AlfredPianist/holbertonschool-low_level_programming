#include "holberton.h"

/**
 * argstostr - converts all arguments of a program to a string.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: The pointer to the resulting string or NULL if ac = 0, av = NULL
 *         or if failed to allocate memory.
 */
char *argstostr(int ac, char **av)
{
	unsigned int len, counter_a, counter_c, counter;
	char *str;

	counter_a = counter_c = counter = len = 0;
	str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (counter_a = 0; av[counter_a] != NULL; counter_a++)
	{
		for (counter_c = 0; av[counter_a][counter_c] != '\0'; counter_c++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);

	for (counter_a = 0; av[counter_a] != NULL; counter_a++)
	{
		for (counter_c = 0; av[counter_a][counter_c] != '\0'; counter_c++)
			str[counter++] = av[counter_a][counter_c];
		str[counter++] = '\n';
	}
	str[counter] = '\0';

	return (str);
}
