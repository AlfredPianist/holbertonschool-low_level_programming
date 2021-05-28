#include "hash_tables.h"

/**
 * hash_table_set - Inserts a new key, value pair if key doesn't exist.
 *                  Otherwise updates key value.
 * @ht: The hash table.
 * @key: The key to be inserted.
 * @value: The value of key @key.
 *
 * Return: 1 if success, 0 if failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	hash_node_t *new_node, *current;

	if (!ht || !key || !*key || !value)
		return (0);

	hash = key_index((unsigned char *)key, ht->size);
	current = ht->array[hash];
	while (current)
	{
		if (!strcmp(key, current->key))
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (0);
	new_node->key = strdup(key), new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		if (new_node->key)
			free(new_node->key);
		if (new_node->value)
			free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[hash];
	ht->array[hash] = new_node;

	return (1);
}
