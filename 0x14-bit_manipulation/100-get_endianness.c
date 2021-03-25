#include "holberton.h"

/**
 * get_endianness - Gets if the computer is little-endian or big-endian
 *
 * Description: Knowing that little-endian means the most significant byte
 *              _MSB_ is stored last and big-endian means the opposite
 *              _MSB first_, then I know that checking if the first byte of
 *              the address in which an unsigned integer 1 is stored, if it
 *              is 1, the MSB is last, meaning big-endian. 0 otherwise.
 * Return: 0 if little-endian, 1 if big-endian.
 */
int get_endianness(void)
{
	unsigned int check;

	check = 1;

	return ((int) ((char *)&check)[0]);
}

