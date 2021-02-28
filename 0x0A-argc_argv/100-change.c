#include "holberton.h"

/**
 * main - make change with infinite amounts of 25, 10, 5, 2 and 1.
 * @argc: The number of arguments.
 * @argv: The argument vector.
 *
 * Description: makes change given an infinite ammount of coins of 25, 10, 5, 2
 *              and 1. Implemented with a greedy algorithm.
 * Return: 1 if number of arguments isn't 2 (program name and change to make),
 *         0 otherwise.
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int cents, index, remainder;

	cents = index = remainder = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	remainder = atoi(argv[1]);
	if (remainder <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (remainder > 0 && index < 5)
	{
		cents += remainder / coins[index];
		remainder = remainder % coins[index];
		index++;
	}
	printf("%d\n", cents);
	return (0);
}
