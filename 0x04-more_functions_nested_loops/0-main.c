#include "holberton.h"

/**
 * main - entry point
 *
 * Description: checks if character is an uppercase letter.
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
