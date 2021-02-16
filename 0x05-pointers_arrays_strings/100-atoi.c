#include "holberton.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string to be converted to integer
 *
 * Return: the converted integer.
 */
int _atoi(char *s)
{
	unsigned int integer;
	short flag, neg_sign;

	integer = neg_sign = flag = 0;

	while (flag < 2)
	{
		if (*s >= '0' && *s <= '9')
		{
			if (flag == 0)
				flag++;
			integer = (integer * 10) + *s - '0';
		}
		else
		{
			if (flag == 1)
				flag++;
			else
			{
				if (*s == '-')
					neg_sign++;
			}
		}
		s++;
	}

	if (neg_sign % 2 != 0)
		integer *= -1;

	return (integer);
}
