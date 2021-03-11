#include "variadic_functions.h"

/**
 * print_strings - print a variable number of strings.
 * @separator: The separator to be used for printing the strings.
 * @n: The total numbers to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	char *str;
	va_list strs;

	counter = 0;
	if (separator != NULL)
	{
		va_start(strs, n);
		while (counter < n)
		{
			str = va_arg(strs, char *);

			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);

			if (counter != n - 1)
				printf("%s", separator);
			counter++;
		}
		va_end(strs);
	}
	printf("\n");
}
