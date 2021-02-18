#include "holberton.h"

/**
 * leet - converts a string into 1337.
 * @s: the source string
 *
 * Return: a pointer to the string converted.
 */
char *leet(char *s)
{
	int index, i_leet;
	char ch[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	index = 0;

	while (s[index] != '\0')
	{
		for (i_leet = 0; leet[i_leet] != '\0'; i_leet++)
		{
			if (ch[i_leet] == s[index])
				s[index] = leet[i_leet];
		}
		index++;
	}

	return (s);
}
