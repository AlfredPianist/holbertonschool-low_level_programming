#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value of a given index.
 * @ht: The hash table.
 * @key: The key to be searched for its value.
 *
 * Return: The value of key @key if it exists. Otherwise NULL-
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *current;

	if (!ht || !key || !*key)
		return (NULL);

	hash = key_index((unsigned char *)key, ht->size);

	current = ht->array[hash];

	while (current)
	{
		if (!strcmp(key, current->key))
			return (current->value);
		current = current->next;
	}

	return (NULL);

}
