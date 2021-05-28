#include "hash_tables.h"

/**
 * key_index - Creates an index for a given key using the hashing algorithm.
 * @key: The key string to be hashed.
 * @size: The size of the hash table to constrain the hashing algorithm result.
 *
 * Return: The index of the hashed string.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
