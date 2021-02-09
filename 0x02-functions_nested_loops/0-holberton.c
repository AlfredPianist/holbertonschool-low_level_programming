#include "holberton.h"

/**
 * main - entry point.
 *
 * Description: prints "Holberton" followed by a new line using
 *              the _putchar function.
 * Return: Always 0.
 */
int main(void)
{
	char holberton[] = "Holberton\n";
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar(holberton[i]);
		i++;
	}

	return (0);
}
