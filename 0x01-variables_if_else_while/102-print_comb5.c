#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all combinations of two sets of two digits,
 *              the two digits are different and you can't repeat
 *              the same two digits in a different order: they're
 *              considered the same combination.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit_1_1, digit_1_2, digit_2_1, digit_2_2;

	digit_1_1 = digit_1_2 = digit_2_1 = 48;
	digit_2_2 = 49;
	while (digit_1_1 <= 57)
	{
		while (digit_1_2 <= 57)
		{
			while (digit_2_1 <= 57)
			{
				while (digit_2_2 <= 57)
				{
					putchar(digit_1_1);
					putchar(digit_1_2);
					putchar(' ');
					putchar(digit_2_1);
					putchar(digit_2_2);
					if (!(digit_1_1 == 57 && digit_1_2 == 56
					      && digit_2_1 == 57
					      && digit_2_2 == 57))
					{
						putchar(',');
						putchar(' ');
					}
					digit_2_2++;
				}
				digit_2_2 = 48;
				digit_2_1++;
			}
			digit_1_2++;
			digit_2_2 = digit_1_2 + 1;
			digit_2_1 = digit_1_1;
		}
		digit_1_1++;
		digit_1_2 = 48;
		digit_2_1 = digit_1_1;
		digit_2_2 = 49;
	}
	putchar('\n');
	return (0);
}
