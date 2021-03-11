#include "variadic_functions.h"

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
			if (counter != n - 1)
				printf("%d%s", num, separator);
			else
				printf("%d\n", num);
			counter++;
		}
		va_end(nums);
	}

}
