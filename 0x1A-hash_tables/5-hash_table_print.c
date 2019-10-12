#include "hash_tables.h"

/**
 * hash_table_get - Print the hash table
 * @ht: Hash table
 * @key: Store the hash
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *traver = NULL;
	unsigned long int idx = 0;

	if (ht == NULL || ht->array == NULL)
	{
		putchar(123);
		putchar(10);
		putchar(125);
		return;
	}

	putchar(123);

	while (idx < ht->size)
	{
		traver = ht->array[idx];
		while (traver != NULL)
		{
			printf("\'%s\':\'%s\'", traver->key, traver->value);
			putchar(44);
			putchar(32);		
			traver = traver->next;

			if (traver == NULL)
				break;
		}
		++idx;
	}
	putchar(125);
	putchar(10);
}
