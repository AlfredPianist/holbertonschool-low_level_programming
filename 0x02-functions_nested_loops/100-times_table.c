#include "holberton.h"

/**
 * print_times_table - prints the times table of n * n.
 * @n: the number in which the matrix n * n will be print.
 *
 * Description: prints a matrix of n * n numbers, only from 0 to 15.
 */
void print_times_table(int n)
{
	int row, column, value;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			if (n != 0)
				_putchar(',');
			for (column = 1; column <= n; column++)
			{
				value = row * column;
				_putchar(' ');
				if ((value / 10) == 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(value + '0');
				}
				else if ((value / 10) > 0 && (value / 10) < 10)
				{
					_putchar(' ');
					_putchar((value / 10) + '0');
					_putchar((value % 10) + '0');
				}
				else if ((value / 10) >= 10)
				{
					_putchar((value / 100) + '0');
					_putchar(((value % 100) / 10) + '0');
					_putchar(((value % 100) % 10) + '0');
				}
				if (column != n)
					_putchar(',');
			}
			_putchar('\n');
			column = 0;
		}
	}
}
