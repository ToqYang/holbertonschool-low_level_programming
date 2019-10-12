#include "hash_tables.h"

/**
 * hash_table_get - Print the hash table
 * @ht: Hash table
 * @key: Store the hash
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_table_t *traver = NULL;
	int idx = 0;

	if (ht == NULL)
	{
		putchar(123);
		putchar(44);
		return;
	}

	traver = ht->array[0];

	while (traver != NULL)
	{
		if (traver[idx] == 0 || traver == NULL)
			putchar(123);

		printf("\'%s\':\'%s\'\n", traver->key, traver->value);
		putchar(44);
		traver = traver->next;
		++idx;
	}
}
