#include "hash_tables.h"

/**
 * hash_table_create - Make a hash table
 *
 * @size: of the hash table
 * Return: Space of the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size < 1)
		return (NULL);

	table = calloc(sizeof(hash_table_t), 1);

	if (table == NULL)
		return (NULL);

	table->array = calloc(sizeof(hash_node_t *), size);

	if (table->array == NULL)
		return (NULL);

	table->size = size;

	return (table);
}
