#include "holberton.h"

/**
 * print_chessboard - prints a chessboard configuration.
 * @a: the chessboard matrix.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int index_a, index_c;

	index_a = index_c = 0;
	while (index_a < sizeof(a))
	{
		while (index_c < sizeof(a[index_a]))
		{
			_putchar(a[index_a][index_c]);
			index_c++;
		}
		_putchar('\n');
		index_c = 0;
		index_a++;
	}
}
