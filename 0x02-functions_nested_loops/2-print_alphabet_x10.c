#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase followed by a new line
 *                      10 times.
 */
void print_alphabet_x10(void)
{
	char letter;
	int times;

	letter = 'a';
	times = 1;

	while (times <= 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
		letter = 'a';
		times++;
	}
}
