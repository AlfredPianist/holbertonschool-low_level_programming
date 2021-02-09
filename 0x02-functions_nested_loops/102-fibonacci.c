#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 numbers of the Fibonacci sequence.
 * Return: Always 0 (Success)
 */
int main(void)
{
	long term_1, term_2, next;
	int counter;

	term_1 = term_2 = 1;
	printf("%ld, %ld, ", term_1, term_2);

	for (counter = 0; counter <= 47; counter++)
	{
		next = term_1 + term_2;
		term_1 = term_2;
		term_2 = next;

		printf("%ld", next);

		if (counter != 47)
			printf(", ");
	}

	printf("\n");

	return (0);
}
