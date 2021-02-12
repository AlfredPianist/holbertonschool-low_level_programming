#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the largest prime factor of 612852475143.
 * Return: Always 0.
 */
int main(void)
{
	long number;
	float temp, sqrt_number;
	int counter;

	number = 612852475143;

	/*
	 * Square root of number. Why? Because there are no two prime
	 * factor numbers which product is higher than the original number.
	 */
	sqrt_number = number / 2;
	temp = 0;
	while (sqrt_number != temp)
	{
		temp = sqrt_number;
		sqrt_number = ((number / temp) + temp) / 2;
	}

	/*
	 * Advance through odd numbers (because it isn't divisible by 2)
	 * and keep dividing the odd number above, if divisible (meaning not
	 * prime), until the square root of number. The highest number
	 * found will be effectively the highest prime factor.
	 */
	for (counter = 3; counter <= sqrt_number + 1; counter = counter + 2)
	{
		if (number % counter == 0)
		{
			number = number / counter;
		}
	}

	printf("%ld\n", number);

	return (0);
}
