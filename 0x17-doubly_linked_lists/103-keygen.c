#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * f3 - The third function creating the third character of the
 *      six-character password.
 * @username: The username.
 * @pass_len: The length of the password.
 *
 * Description: Multiplies each of the ASCII values of the username and
 *              operates with it a bitwise xor and & to generate the position
 *              of the character in the array k for the third character of
 *              the password.
 * Return: The position of the third character to be extracted in the initial
 *         array of characters.
 */
int f3(char *username, int pass_len)
{
	int i, res;

	res = 1;
	for (i = 0; i < pass_len; i++)
		res *= username[i];

	return ((res ^ 0x55) & 0x3f);
}

/**
 * f4 - The fourth function creating the fourth character of the
 *      six-character password.
 * @username: The username.
 * @pass_len: The length of the password.
 *
 * Description: Pending...
 * Return: The position of the fourth character to be extracted in the initial
 *         array of characters.
 */
int f4(char *username, int pass_len)
{
	int i, res;

	res = username[0];
	for (i = 0; i < pass_len; i++)
		if (res < username[i])
			res = username[i];
	srand(res ^ 0xe);

	return (rand() & 0x3f);
}


/**
 * f5 - The fifth function creating the fifth character of the
 *      six-character password.
 * @username: The username.
 * @pass_len: The length of the password.
 *
 * Description: Pending...
 * Return: The position of the fifth character to be extracted in the initial
 *         array of characters.
 */
int f5(char *username, int pass_len)
{
	int i, res;

	res = 0;
	for (i = 0; i < pass_len; i++)
		res += username[i] * username[i];

	return ((res ^ 0xef) & 0x3f);
}

/**
 * f6 - The sixth function creating the sixth character of the
 *      six-character password.
 * @username: The username.
 *
 * Description: Pending...
 * Return: The position of the sixth character to be extracted in the initial
 *         array of characters.
 */
int f6(char *username)
{
	int i, res;

	res = 0;
	for (i = 0; i < username[0]; i++)
		res = rand();

	return ((res ^ 0xe5) & 0x3f);
}

/**
 * main - A keygen for crackme5.
 * @argc: The number of arguments.
 * @argv: The argument vector.
 *
 * Description: For crackme5 to work you have to pass a username of 6
 *              characters. No more and no less. Each character of the password
 *              is generated via 6 different functions that uses the characters
 *              of the username and operates with them in different ways to
 *              return a position of an array of characters predetermined in
 *              crackme5. The first two functions are written here in the main
 *              function (betty reasons), and the rest of them are written
 *              above.
 *
 * Return: 0 (Always success).
 */
int main(int argc, char *argv[])
{
	char *username, password[7];
	char *k = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	int pass_len, i, res;

	if (argc != 2)
		fprintf(stderr, "Usage: %s username\n", argv[0]), exit(EXIT_FAILURE);

	username = argv[1], pass_len = strlen(username);

	/*
	 * f1 - Takes the length of the password (6) and operates with it a bitwise
	 *      xor and & to generate the position of the character in the array k
	 *      for the first character of the password.
	 */
	password[0] = k[(pass_len ^ 0x3b) & 0x3f];

	/*
	 * f2 -  Sums each of the ASCII values of the username and operates with it
	 *       a bitwise xor and & to generate the position of the character in
	 *       the array k for the second character of the password.
	 */
	res = 0;
	for (i = 0; i < pass_len; i++)
		res += username[i];
	password[1] = k[(res ^ 0x4f) & 0x3f];

	/* Functions 3 to 6 for characters 3 to 6 of the password */
	password[2] = k[f3(username, pass_len)]; /* f3 */
	password[3] = k[f4(username, pass_len)]; /* f4 */
	password[4] = k[f5(username, pass_len)]; /* f5 */
	password[5] = k[f6(username)]; /* f6 */
	password[6] = '\0';

	printf("%s", password);
	exit(EXIT_SUCCESS);
}
