#include "3-calc.h"

/**
 * get_op_func - gets the function of the operation set by s.
 * @s: The operator.
 *
 * Return: The function of the operation, NULL if could't be found.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (s[0] == ops[i].op[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
