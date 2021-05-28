#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	shash_table_t *ht;
	char *value;

	ht = shash_table_create(1024);
	shash_table_set(ht, "y", "0");
	value = shash_table_get(ht, "y");
	printf("from key %s retrieved value %s\n", "y", value);
	shash_table_print(ht);

	shash_table_set(ht, "j", "1");
	value = shash_table_get(ht, "j");
	printf("from key %s retrieved value %s\n", "j", value);
	shash_table_print(ht);

	shash_table_set(ht, "c", "2");
	value = shash_table_get(ht, "c");
	printf("from key %s retrieved value %s\n", "c", value);
	shash_table_print(ht);

	shash_table_set(ht, "b", "3");
	value = shash_table_get(ht, "b");
	printf("from key %s retrieved value %s\n", "b", value);
	shash_table_print(ht);

	shash_table_set(ht, "z", "4");
	value = shash_table_get(ht, "z");
	printf("from key %s retrieved value %s\n", "z", value);
	shash_table_print(ht);

	shash_table_set(ht, "n", "5");
	value = shash_table_get(ht, "n");
	printf("from key %s retrieved value %s\n", "n", value);
	shash_table_print(ht);

	shash_table_set(ht, "a", "6");
	value = shash_table_get(ht, "a");
	printf("from key %s retrieved value %s\n", "a", value);
	shash_table_print(ht);

	shash_table_set(ht, "m", "7");
	value = shash_table_get(ht, "m");
	printf("from key %s retrieved value %s\n", "m", value);

	printf("Final sorted values\n");
	shash_table_print(ht);
	printf("Final sorted values printed in reverse\n");
	shash_table_print_rev(ht);

	shash_table_delete(ht);
	return (EXIT_SUCCESS);
}
