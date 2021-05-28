#include "hash_tables.h"

/**
 * hash_djb2 - Implementation of the dbj2 hashing algorithm.
 * @str: The string to be hashed.
 *
 * Return: The hash of the string.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	/*
	 * Explanation of why the hashing number and 33 as multiplier
	 * https://stackoverflow.com/a/13809282/3127933
	 */
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
	{
		/*
		 * hash * 33 + c (ASCII value).
		 * Much faster to compute with shifts for the CPU.
		 */
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
