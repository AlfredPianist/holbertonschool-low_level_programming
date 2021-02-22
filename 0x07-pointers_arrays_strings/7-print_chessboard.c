#include "holberton.h"

/**
 * leet - converts a string into 1337.
 * @s: the source string
 *
 * Return: a pointer to the string converted.
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
