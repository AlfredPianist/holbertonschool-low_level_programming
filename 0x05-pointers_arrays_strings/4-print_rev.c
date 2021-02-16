#include "holberton.h"

/**
 * print_rev - prints a string reversed.
 * @s: the string to be printed.
 */
void print_rev(char *s)
{
	int length;

	length = 0;
	for (; *s != '\0'; s++)
		length++;

	s--;
	for (; length > 0; s--)
	{
		_putchar(*s);
		length--;
	}
	_putchar('\n');
}
