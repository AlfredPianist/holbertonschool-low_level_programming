#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table
 * @size: The size of the hash table.
 *
 * Return: The new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	hash_node_t **new_node_array;

	if (!size)
		return (NULL);

	new_hash_table = malloc(sizeof(*new_hash_table));
	if (!new_hash_table)
		return (NULL);

	new_node_array = calloc(size, sizeof(*new_node_array));
	if (!new_node_array)
	{
		free(new_hash_table);
		return (NULL);
	}

	new_hash_table->size = size;
	new_hash_table->array = new_node_array;

	return (new_hash_table);
}
