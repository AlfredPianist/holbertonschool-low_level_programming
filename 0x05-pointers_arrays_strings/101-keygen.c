#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int key;
	short password;

	srand(time(0));
	/*
	 * 2772 is the password, as evidenced by the instruction
	 * cmp qword [var_8h], 0xad4 from Cutter. 0xad4 is 2772 in hex.
	 */
	password = 2772;
	key = 0;
	/*
	 * The original checksum function traverses the string as input on the
	 * 101-crackme app and returns the sum of its characters in ASCII code.
	 * So, I decided to subtract the random character to the password.
	 */
	while (password > 0)
	{
		/*
		 * I chose to use all printable characters in the ASCII table
		 * from 33 to 126. The if prints up to the next-to-last one
		 * guaranteeing the correct output of the last one.
		 */
		if (password >= 126)
		{
			/*
			 * Random number from 33 to 126. Hence the modulo and
			 * the offset.
			 */
			key = (rand() % (126 - 33 + 1)) + 33;
			printf("%c", key);
			password -= key;
		}
		else
		{
			printf("%c", password);
			password = 0;
		}
	}

	return (0);
}
