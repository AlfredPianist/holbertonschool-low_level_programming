#include "3-calc.h"

/**
 * op_add - adds two numbers.
 * @a: The first term.
 * @b: The second term.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers.
 * @a: The first term.
 * @b: The second term.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers.
 * @a: The first factor.
 * @b: The second factor.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - returns the modulus of two numbers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The modulus (remainder) of a and b.
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
