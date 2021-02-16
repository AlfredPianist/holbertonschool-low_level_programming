#include "holberton.h"

/**
 * puts2 - prints every other character of a string, starting from the first
 *          one
 * @str: the string to be printed.
 */
void puts2(char *str)
{
	int counter;

	counter = 0;

	while (str[counter] != '\0')
	{
		if (counter % 2 == 0)
			_putchar(*(str + counter));
		counter++;
	}
	_putchar('\n');
}
