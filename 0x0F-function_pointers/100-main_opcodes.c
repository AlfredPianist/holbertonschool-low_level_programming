#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the main function's instruction opcodes.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int (*p_address)(int, char **);
	int num_bytes, counter;

	num_bytes = counter = 0;

	/* Exits if there is anything else than 2 arguments */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/* Exits if number of bytes is negative */
	if (argv[1][0] == '-')
	{
		printf("Error\n");
		exit(2);
	}

	/*
	 * To print opcodes, the function pointer p_address points to the
	 * main function.
	 */
	p_address = main;

	/*
	 * Because a function pointer points to actual instructions,
	 * iterates through each byte from the pointer's address and casts it
	 * to be an unsigned char * value for it to be printed then as hex (2 bytes).
	 */
	num_bytes = atoi(argv[1]);
	for (counter = 0; counter < num_bytes; counter++)
	{
		printf("%02x", *((unsigned char *)(p_address + counter)));
		if (counter != num_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
