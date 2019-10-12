#include "hash_tables.h"

/**
 * hash_table_set - Add eleements to the hash table
 *
 * @ht: Hash table
 * @key: Number of the hash table
 * @value: Value associated to array
 * Return: 1 if is correct and 1 if is false
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *mess = NULL;
	hash_node_t *new = NULL, *traver = NULL;
	unsigned long int idx = 0;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
	{
		new = calloc(sizeof(hash_node_t), 1);
		if (new == NULL)
			return (0);
		new->key = (char *)key;
		mess = strdup(value);
		new->value = mess;
		new->next = NULL;
	}
	traver = ht->array[idx];
	while (traver != NULL)
	{
		if (strcmp(traver->key, key) == 0)
		{
			mess = strdup(value);
			traver->value = mess;
			return (1);
		}
		traver = traver->next;
	}
	new = calloc(sizeof(hash_node_t), 1);
	if (new == NULL)
		return (0);

	new->key = (char *)key;
	mess = strdup(value);
	new->value = mess;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
