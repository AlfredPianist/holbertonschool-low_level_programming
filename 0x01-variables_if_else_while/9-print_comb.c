#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 from 0
 *              separated by a comma and a space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		if (digit < 57)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}

	putchar('\n');

	return (0);
}
