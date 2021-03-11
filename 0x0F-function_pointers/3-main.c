#include "3-calc.h"

/**
 * main - program that performs simple operations (+, -, *, / and %),
 *        and pass the operations as function pointers.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 if success, otherwise
 *         98 if incorrect number of arguments,
 *         99 if operand non existent, and
 *         100 if division by zero.
 */
int main(int argc, char *argv[])
{
	int (*oper)(int, int);
	int num_1, num_2, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oper = get_op_func(argv[2]);

	if (oper == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);
	res = oper(num_1, num_2);

	printf("%d\n", res);

	return (0);
}
