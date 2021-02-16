#include "holberton.h"

/**
 * puts_half - prints the second half of the string
 * @str: the string to be printed.
 */
void puts_half(char *str)
{
	int length;

	length = 0;

	/* First, find the length of the string. */
	for (; *str != '\0'; str++)
	{
		length++;
	}

	str = str - (length / 2);

	/*
	 * If length is odd, print from the half onwards
	 * if (length % 2 == 0)
	 *	str = str - (length / 2);
	 * If not, print from one before the half onwards
	 * else
	 *	str = str - ((length - 1) / 2);
	 */

	/* Print the string from the point set */
	for (; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
