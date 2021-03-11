#include "variadic_functions.h"

/**
 * print_all - print the arguments formatted from a list of formats.
 * @format: The format list.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int counter;
	char *s, c;
	int i;
	float f;

	counter = 0;

	va_start(args, format);
	while (format != NULL && format[counter] != '\0')
	{
		switch (format[counter++])
		{
		case 'c':
			c = (char) va_arg(args, int);
			printf("%c", c);
			break;
		case 'i':
			i = va_arg(args, int);
			printf("%d", i);
			break;
		case 'f':
			f = (float) va_arg(args, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			continue;
		}
		if (format[counter] != '\0')
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
