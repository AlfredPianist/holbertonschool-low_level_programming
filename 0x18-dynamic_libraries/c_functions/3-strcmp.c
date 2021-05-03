#include "holberton.h"

/**
 * *_strcmp - compares two strings outputing an integer.
 *
 * Description: compares two strings, and its output, being an integer,
 *              shows the difference in ASCII between characters in s1
 *              and s2. If 0, then both strings are equal. If positive,
 *              then the character being compared from s1 is greater than s2,
 *              negative if otherwise.
 * @s1: the source string.
 * @s2: the string it will be compared to.
 *
 * Return: an integer.
 */
int _strcmp(char *s1, char *s2)
{
	int compare, index;

	compare = 0;
	for (index = 0;
	     (s1[index] != '\0' || s2[index] != '\0') && compare == 0;
	     ++index)
		compare = s1[index] - s2[index];

	return (compare);
}
