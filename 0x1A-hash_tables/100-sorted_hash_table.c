#include "hash_tables.h"

/**
 * shash_table_create - Creates a new hash table
 * @size: The size of the hash table.
 *
 * Return: The new hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_hash_table;
	shash_node_t **new_node_array;

	if (!size)
		return (NULL);

	new_hash_table = calloc(1, sizeof(*new_hash_table));
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

/**
 * shash_node_set - Sets the new key, value pair in its index and in the sorted
 *                  doubly-linked list structure.
 * @ht: The hash table.
 * @key: The key to be inserted.
 * @value: The value of key @key.
 * @hash: The hash computation of key @key.
 *
 * Return: 1 if success, 0 if failure.
 */
int shash_node_set(shash_table_t *ht, const char *key,
		   const char *value, unsigned long int hash)
{
	shash_node_t *new_node, *curr;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (0);
	new_node->key = (char *)key, new_node->value = (char *)value;

	new_node->sprev = new_node->snext = NULL;
	if (!ht->shead)
	{
		new_node->next = ht->array[hash], ht->array[hash] = new_node;
		ht->shead = ht->stail = new_node;
		return (1);
	}
	curr = ht->shead;
	if (strcmp(key, curr->key) < 0)
	{
		new_node->snext = curr, curr->sprev = new_node;
		ht->shead = new_node;

		new_node->next = ht->array[hash], ht->array[hash] = new_node;
		return (1);
	}
	while (curr->snext)
	{
		if (curr->snext && strcmp(key, curr->snext->key) < 0)
		{
			new_node->snext = curr->snext, curr->snext->sprev = new_node;
			curr->snext = new_node, new_node->sprev = curr;

			new_node->next = ht->array[hash], ht->array[hash] = new_node;
			return (1);
		}
		curr = curr->snext;
	}
	curr->snext = new_node, new_node->sprev = curr;
	ht->stail = new_node;

	new_node->next = ht->array[hash], ht->array[hash] = new_node;
	return (1);
}

/**
 * shash_table_set - Inserts a new key, value pair if key doesn't exist.
 *                   Otherwise updates key value.
 * @ht: The hash table.
 * @key: The key to be inserted.
 * @value: The value of key @key.
 *
 * Return: 1 if success, 0 if failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	shash_node_t *current;
	char *new_node_key, *new_node_value;

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

	new_node_key = strdup(key), new_node_value = strdup(value);
	if (!new_node_key || !new_node_value)
	{
		if (new_node_key)
			free(new_node_key);
		if (new_node_value)
			free(new_node_value);
		return (0);
	}

	if (!shash_node_set(ht, new_node_key, new_node_value, hash))
		return (0);
	return (1);
}

/**
 * shash_table_get - Retrieves the value of a given index.
 * @ht: The hash table.
 * @key: The key to be searched for its value.
 *
 * Return: The value of key @key if it exists. Otherwise NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int hash;
	shash_node_t *current;

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

/**
 * shash_table_print - Prints the entire hash table through the doubly-linked
 *                     list structure.
 * @ht: The hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	short printed;

	printed = 0;

	if (!ht)
		return;

	current = ht->shead;
	printf("{");
	while (current)
	{
		printed ? printf(", ") : printed;
		printf("\'%s\': \'%s\'", current->key, current->value);
		printed = 1;
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the entire hash table in reverse through the
 *                         doubly-linked list structure.
 * @ht: The hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	short printed;

	printed = 0;

	if (!ht)
		return;

	current = ht->stail;
	printf("{");
	while (current)
	{
		printed ? printf(", ") : printed;
		printf("\'%s\': \'%s\'", current->key, current->value);
		printed = 1;
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes the entire hash table.
 * @ht: The hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *tmp;

	if (!ht)
		return;

	current = ht->shead;
	while (current)
	{
		tmp = current;
		current = current->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
	free(ht->array);
	free(ht);
}
