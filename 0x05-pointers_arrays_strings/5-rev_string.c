#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: the string to be reversed.
 */
void rev_string(char *s)
{
	int length, counter;
	char curr_char;

	length = counter = 0;

	/* First, find the length of the string. */
	for (; *s != '\0'; s++)
	{
		length++;
	}

	/*
	 * Then exchange each character from each end of the string,
	 * advancing and reversing one character at a time using
	 * a temporary char variable until the middle of the string.
	 */
	for (; counter < (length / 2); counter++)
	{
		/*
		 * First decrement the pointer (first set at NUL)
		 */
		s--;
		/*
		 * Temporary value set to the one of the current position of
		 * the pointer
		 */
		curr_char = *s;
		/*
		 * Set the value of the current position of the pointer to
		 * the value of the character of the beginning of the string
		 * depending of the iteration (1st character, then 2nd, and so).
		 * "2 * counter" because if not, the pointer will always be at
		 * the beginning and wouldn't advance, "+ 1" because if not it
		 * wouldn't take into account the first character (it would
		 * overflow otherwise).
		 */
		*s = *(s - length + (2 * counter) + 1);
		/* Now swap this last position's character with curr_char */
		*(s - length + (2 * counter) + 1) = curr_char;
	}
}
