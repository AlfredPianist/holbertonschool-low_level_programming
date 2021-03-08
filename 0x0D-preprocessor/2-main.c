#include <stdio.h>

/**
 * main - prints the name of the source file.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	printf("%s", __BASE_FILE__);
	return (0);
}
