#include "holberton.h"

/**
 * main - multiplies two numbers.
 * @argc: Program's argument count.
 * @argv: Program's argument vector (program's name and two numbers).
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int f1, f2;

	f1 = f2 = 0;

	if (argc != 3)
		printf("Error\n");
	else
	{
		f1 = atoi(argv[1]);
		f2 = atoi(argv[2]);

		printf("%d\n", f1 * f2);
	}

	return (0);
}
