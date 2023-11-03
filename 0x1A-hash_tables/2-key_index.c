#include "hash_tables.h"

/**
 * key_index - Gets the index for a key in the hash table.
 * @key: The key to hash.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key should be stored in the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx_key;

	idx_key = hash_djb2(key) % size;

	return (idx_key);
}
