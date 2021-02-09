#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the sum of all the multiples of 3 or 5 below 1024.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int multiple_sum, counter;

	multiple_sum = 0;
	counter = 3;

	while (counter < 1024)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
			multiple_sum += counter;
		counter++;
	}

	printf("%d\n", multiple_sum);

	return (0);
}
