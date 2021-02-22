#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	f = _strchr(s, '\0');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	f = _strchr(s, 'o');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
