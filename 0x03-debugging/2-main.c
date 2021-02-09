#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the largest of 3 integers
 * Return: 0
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	largest = largest_number(a, b, c);

	printf("Case 1: %d, %d, %d. %d is the largest\n", a, b, c, largest);

	a = -98;
	b = 972;
	c = 0;

	largest = largest_number(a, b, c);

	printf("Case 2: %d, %d, %d. %d is the largest\n", a, b, c, largest);

	a = -98;
	b = 0;
	c = 978;

	largest = largest_number(a, b, c);

	printf("Case 3: %d, %d, %d. %d is the largest\n", a, b, c, largest);

	return (0);
}
