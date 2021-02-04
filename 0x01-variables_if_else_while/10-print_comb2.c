#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers from 00 to 99 in ascending order
 *              separated by a comma and a space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit_one, digit_two;

	digit_one = 48;
	digit_two = 48;

	while (digit_one <= 57)
	{
		while (digit_two <= 57)
		{
			putchar(digit_one);
			putchar(digit_two);
			if (!(digit_one == 57 && digit_two == 57))
			{
				putchar(',');
				putchar(' ');
			}
			digit_two++;
		}
		digit_one++;
		digit_two = 48;
	}

	putchar('\n');

	return (0);
}
