#include "holberton.h"

/**
 * print_square - prints the character "#" in an n * n square,
 *                followed by a new line.
 * @size: the size of the square.
 */
void print_square(int size)
{
	int row, column;

	if (size >= 0)
	{
		if (size == 0)
			_putchar('\n');
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
