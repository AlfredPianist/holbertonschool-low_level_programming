#include "holberton.h"

/**
 * print_diagonal - prints the character "\" n times,
 *                  followed by a new line in a diagonal shape.
 * @n: the number of times the "\" character will be print.
 */
void print_diagonal(int n)
{
	int times, spaces;

	if (n >= 0)
	{
		if (n == 0)
			_putchar('\n');
		for (times = 0; times < n; times++)
		{
			for (spaces = 0; spaces < times; spaces++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
