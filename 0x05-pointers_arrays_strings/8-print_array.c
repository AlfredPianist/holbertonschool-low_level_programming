#include "holberton.h"

/**
 * print_array - prints n elements of an array of integers.
 * @a: the array of integers to be printed.
 * @n: the ammount of integers to be printed.
 */
void print_array(int *a, int n)
{
	int counter;

	counter = 0;
	while (counter < n)
	{
		printf("%d", a[counter]);
		if (counter != n - 1)
			printf(", ");
		counter++;
	}
	printf("\n");
}
