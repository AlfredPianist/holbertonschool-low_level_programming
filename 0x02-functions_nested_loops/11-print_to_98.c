#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints up to the number 98.
 * @n: the integer from which it will start printing.
 *
 * Description: prints from integer n up to 98.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
