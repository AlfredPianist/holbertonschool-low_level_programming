#include "holberton.h"

/**
 * main - adds positive numbers.
 * @argc: Program's argument count.
 * @argv: Program's argument vector (program's name and digits).
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int index, sum, flag;
	long str_to_int;
	char *ptr_str;

	index = sum = flag = str_to_int = 0;
	ptr_str = NULL;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (index = 1; index < argc && flag == 0; index++)
		{
			if (atoi(argv[index]) < 0)
			{
				printf("0\n");
				flag = 1;
			}
			else
			{
				str_to_int = strtol(argv[index], &ptr_str, 10);
				if ((ptr_str == argv[index]) || (*ptr_str != '\0'))
				{
					printf("Error\n");
					flag = 1;
				}
				else
					sum += atoi(argv[index]);
			}
		}
		if (flag == 0)
			printf("%d\n", sum);
	}

	return (0);
}
