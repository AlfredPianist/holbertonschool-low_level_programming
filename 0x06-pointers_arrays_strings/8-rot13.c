#include "holberton.h"

/**
 * rot13 - converts a string to rot13 cypher.
 * @s: the source string
 *
 * Return: a pointer to the string converted.
 */
char *rot13(char *s)
{
	int index, i_rot, rot;
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	index = rot = 0;

	while (s[index] != '\0')
	{
		for (i_rot = 0; ch[i_rot] != '\0'; i_rot++)
		{
			if (ch[i_rot] == s[index] && rot == 0)
			{
				s[index] = rot13[i_rot];
				rot++;
			}
		}
		index++;
		rot = 0;
	}

	return (s);
}
