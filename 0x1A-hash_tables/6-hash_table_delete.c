#include "hash_tables.h"
 
/**
 * hash_table_delete - Freezer
 *
 * @ht: Hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *traversing = NULL;
 
	if (ht == NULL || ht->array == NULL)
		return;
 
	while (idx < ht->size)
	{
		while (ht->array[idx] != NULL)
		{
			traversing = (ht->array[idx])->next;
			free((ht->array[idx])->key);
			free((ht->array[idx])->value);
			free(ht->array[idx]);
			ht->array[idx] = traversing;
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}
