#include "variadic_functions.h"

/**
 * print_numbers - print a variable number of numbers.
 * @separator: The separator to be used for printing the numbers.
 * @n: The total numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	int num;
	va_list nums;

	counter = num = 0;
	if (separator != NULL)
	{
		va_start(nums, n);
		while (counter < n)
		{
			num = va_arg(nums, int);

			printf("%d", num);
			if (counter != n - 1)
				printf("%s", separator);

			counter++;
		}
		va_end(nums);
	}
	printf("\n");
}
