#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowecase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter = letter + 1;
	}
	putchar('\n');

	return (0);
}
