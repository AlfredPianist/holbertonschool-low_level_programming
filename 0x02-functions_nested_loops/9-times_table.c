#include "holberton.h"

/**
 * times_table - prints the 9 times table.
 */
void times_table(void)
{
	int row, column, value;

	row = column = value = 0;

	while (row <= 9)
	{
		while (column <= 9)
		{
			value = row * column;

			if ((value / 10) == 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(value + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((value / 10) + '0');
				_putchar((value % 10) + '0');
			}

			if (column != 9)
				_putchar(',');
			else
				_putchar('\n');

			column++;
		}
		column = 0;
		row++;
	}
}
