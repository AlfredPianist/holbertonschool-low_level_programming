#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowecase except letters 'e' and 'q'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter = letter + 1;
	}

	putchar('\n');

	return (0);
}
