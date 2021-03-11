#include "variadic_functions.h"

/**
 * print_all - print the arguments formatted from a list of formats.
 * @format: The format list.
 */
void print_all(const char * const format, ...)
{
	char *s, c;
	unsigned int counter;
	int i;
	float f;
	va_list args;

	counter = 0;

	va_start(args, format);
	while (format[counter] != '\0')
	{
		switch (format[counter++])
		{
		case 'c':
			c = (char) va_arg(args, int);
			printf("%c", c);
			break;
		case 'i':
			i = va_arg(args, int);
			printf("%i", i);
			break;
		case 'f':
			f = (float) va_arg(args, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			break;
		default:
			continue;
		}
		if (format[counter] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
