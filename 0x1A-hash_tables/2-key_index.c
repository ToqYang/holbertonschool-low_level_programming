#include "hash_tables.h"

/**
 * key_index - Give index of a key
 *
 * @key: Number hash
 * @size: Length of the array
 * Return: Key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;
	unsigned long int mess;

	mess = hash_djb2(key);

	index = (mess % (size));

	return (index);
}
