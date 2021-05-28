#include "hash_tables.h"

/**
 * hash_table_print - Prints the entire hash table.
 * @ht: The hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int index;
	short printed;

	index = printed = 0;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];
		while (current)
		{
			printed ? printf(", ") : printed;
			printf("\'%s\': \'%s\'", current->key, current->value);
			printed = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
