#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all combinations of two digits, the two digits
 *              are different and you can't repeat the same two digits
 *              in a different order: they're considered the same
 *              combination.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit_one, digit_two, counter;

	digit_one = 48;
	digit_two = 49;
	counter = 0;

	while (digit_one <= 56)
	{
		while (digit_two <= 57)
		{
			putchar(digit_one);
			putchar(digit_two);
			if (!(digit_one == 56 && digit_two == 57))
			{
				putchar(',');
				putchar(' ');
			}
			digit_two++;
		}
		digit_one++;
		counter++;
		digit_two = 49 + counter;
	}

	putchar('\n');

	return (0);
}
