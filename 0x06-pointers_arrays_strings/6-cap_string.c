#include "holberton.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @s: the source string
 *
 * Return: a pointer to the string converted.
 */
char *cap_string(char *s)
{
	int index, i_sep, sep;
	char sep_list[] = {' ', '\t', '\n', ';', '.', '!',
			   '?', '"', '(', ')', '{', '}'};

	index = i_sep = sep = 0;

	if (s[index] >= 97 && s[index] <= 122)
		s[index] = s[index] - 32;
	index++;

	while (s[index] != '\0')
	{
		for (i_sep = 0; sep_list[i_sep] != '\0'; i_sep++)
		{
			if (sep_list[i_sep] == s[index - 1])
				sep = 1;
		}
		if (sep == 1 && (s[index] >= 97 && s[index] <= 122))
			s[index] = s[index] - 32;
		index++;
		sep = 0;
	}

	return (s);
}
