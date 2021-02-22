#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "d";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);
	f = "0";
	t = _strpbrk(s, f);
	printf("%s\n", t);
	f = "a";
	t = _strpbrk(s, f);
	printf("%s\n", t);
	return (0);
}
