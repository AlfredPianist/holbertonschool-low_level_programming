#include "holberton.h"

/**
 * print_line - prints the character "_" in the terminal n times.
 * @n: the number of times the "_" character will be print.
 */
void print_line(int n)
{
	int times;

	if (n > 0)
	{
		for (times = 0; times < n; times++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
