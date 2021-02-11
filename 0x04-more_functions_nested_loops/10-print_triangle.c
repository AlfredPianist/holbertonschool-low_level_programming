#include "holberton.h"

/**
 * print_square - prints the character "#" in a squared triangle shape,
 *                followed by a new line.
 * @size: the size of the triangle in lines.
 */
void print_triangle(int size)
{
	int row, column;

	if (size >= 0)
	{
		if (size == 0)
			_putchar('\n');
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
				if (column > size - row)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
