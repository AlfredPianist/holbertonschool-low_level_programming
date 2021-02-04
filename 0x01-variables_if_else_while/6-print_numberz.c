#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 from 0,
 *              ASCII table version
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');

	return (0);
}
