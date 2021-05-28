#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the entire hash table.
 * @ht: The hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *tmp;
	unsigned long int index;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];
		while (current)
		{
			tmp = current;
			current = current->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
