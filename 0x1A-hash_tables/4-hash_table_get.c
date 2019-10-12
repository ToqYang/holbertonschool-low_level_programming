#include "hash_tables.h"

/**
 * hash_table_get - Get the value about the key
 *
 * @ht: Hash Table
 * @key: String to comparate
 * Return: String of the value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *traversing = NULL;
	unsigned long int len = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	len = key_index((const unsigned char *)key, ht->size);
	traversing = ht->array[len];

	while (traversing != NULL)
	{
		if (strcmp(traversing->key, key) == 0)
		{
			return (traversing->value);
		}
		traversing = traversing->next;
	}
	return (NULL);
}
