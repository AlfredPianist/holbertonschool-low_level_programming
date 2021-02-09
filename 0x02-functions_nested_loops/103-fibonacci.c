#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the sum of the even numbers up to 4000000
 *              of the Fibonacci sequence.
 * Return: Always 0 (Success)
 */
int main(void)
{
	long term_1, term_2, next, sum;

	term_1 = 1;
	term_2 = 2;

	for (next = term_1 + term_2; next <= 4000000; next = term_1 + term_2)
	{
		term_1 = term_2;
		term_2 = next;

		if (next % 2 == 0)
			sum += next;
	}

	printf("%ld\n", sum);

	return (0);
}
