#include "holberton.h"

/**
 * jack_bauer - prints every minute of the clock in 24 hour format.
 */
void jack_bauer(void)
{
	int minutes, hours;

	minutes = hours = 0;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');

			minutes++;
		}
		minutes = 0;
		hours++;
	}
}
