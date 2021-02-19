#include "holberton.h"

/**
 * print_hex - prints each character in hex with leading 0
 * @b: the buffer.
 * @index: the index of the current character in the buffer.
 * @size: the size of the buffer.
 */
void print_hex(char *b, int index, int size)
{
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		if (counter % 2 == 0)
			printf(" ");

		if ((index + counter) < size)
			printf("%02x", b[index + counter]);
		else
			printf("  ");
	}
}

/**
 * print_char - prints each character replacing with . non printing characters.
 * @b: the buffer.
 * @index: the index of the current character in the buffer.
 * @size: the size of the buffer.
 */
void print_char(char *b, int index, int size)
{
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		if ((index + counter) < size)
		{
			if (!(b[index + counter] >= 32
			      && b[index + counter] <= 126))
				printf(".");
			else
				printf("%c", b[index + counter]);
		}
	}
}

/**
 * print_buffer - prints a hexdump of a string.
 * @b: the string to be printed.
 * @size: the size of the buffer.
 */
void print_buffer(char *b, int size)
{
	int counter;

	counter = 0;

	if (size <= 0)
		printf("\n");
	else
	{
		while (counter < size)
		{
			/* Print 8 bytes in hex */
			printf("%08x:", counter);

			print_hex(b, counter, size);
			printf(" ");

			print_char(b, counter, size);
			printf("\n");

			counter += 10;
		}
	}
}
