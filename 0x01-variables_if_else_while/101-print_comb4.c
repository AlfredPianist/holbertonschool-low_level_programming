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
	int digit_one, digit_two, digit_three, counter_1, counter_2;

	digit_one = 48;
	digit_two = 49;
	digit_three = 50;
	counter_1 = 0;
	counter_2 = 0;

	while (digit_one <= 55)
	{
		while (digit_two <= 56)
		{
			while (digit_three <= 57)
			{
				putchar(digit_one);
				putchar(digit_two);
				putchar(digit_three);

				if (!(digit_one == 55 && digit_two == 56
				      && digit_three == 57))
				{
					putchar(',');
					putchar(' ');
				}
				digit_three++;
			}
			digit_two++;
			counter_2++;
			digit_three = 50 + counter_2;
		}
		counter_1++;
		counter_2 = counter_1;
		digit_one++;
		digit_two = 49 + counter_1;
		digit_three = 50 + counter_1;
	}

	putchar('\n');

	return (0);
}
