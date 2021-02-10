#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 100 numbers of the Fibonacci sequence
 *              beginning with 1 and 2.
 *              I decided to cut from the 92nd term onward the long number
 *              in two long halves, knowing that a long type can't store more
 *              than that number. Thus, the creation of the "high" and "low"
 *              versions of the previous variables, and printing them by adding
 *              them with an add and carry style. That's why the usage of the
 *              1*10^10 number.
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long term_1, term_2, next;
	unsigned long term_1_h, term_1_l, term_2_h, term_2_l, next_h, next_l;
	int carry, counter;

	term_1 = 1;
	term_2 = 2;
	printf("%lu, %lu, ", term_1, term_2);
	for (counter = 0; counter < 90; counter++)
	{
		next = term_1 + term_2;
		term_1 = term_2;
		term_2 = next;
		printf("%lu, ", next);
	}

	term_1_h = term_1 / 10000000000;
	term_1_l = term_1 % 10000000000;
	term_2_h = term_2 / 10000000000;
	term_2_l = term_2 % 10000000000;
	carry = 0;
	for (counter = 0; counter < 6; counter++)
	{
		next_l = term_1_l + term_2_l;
		if ((next_l / 1000000000) / 10 == 1)
		{
			carry = 1;
		}
		next_l = next_l % 10000000000;
		next_h = term_1_h + term_2_h + carry;
		term_1_h = term_2_h;
		term_1_l = term_2_l;
		term_2_h = next_h;
		term_2_l = next_l;
		carry = 0;
		printf("%lu%lu", next_h, next_l);
		if (counter != 5)
			printf(", ");
		}
	printf("\n");
	return (0);
}
