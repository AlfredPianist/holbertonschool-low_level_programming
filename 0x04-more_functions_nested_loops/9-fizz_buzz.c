#include <stdio.h>

/**
 * main - entry point
 *
 * Description: The FizzBuzz problem:
 *              If a number is multiple of 3, print "Fizz",
 *              if a number is multiple of 5, print "Buzz",
 *              if a number is multiple of both, print "FizzBuzz".
 * Return: Always 0.
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (!(number % 3 == 0 || number % 5 == 0))
			printf("%d", number);
		if (number % 3 == 0)
			printf("Fizz");
		if (number % 5 == 0)
			printf("Buzz");
		if (number != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
