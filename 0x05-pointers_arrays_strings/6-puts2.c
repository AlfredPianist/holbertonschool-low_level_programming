#include "holberton.h"

/**
 * puts2 - prints every other character of a string, starting from the first
 *          one
 * @str: the string to be printed.
 */
void puts2(char *str)
{
	for (; *str != '\0'; str = str + 2)
		_putchar(*str);
	_putchar('\n');
}
