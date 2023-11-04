#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key.
 * @ht: The hash table to search.
 * @key: The key to look up.
 *
 * Return: The value associated with the key, or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *idx;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    idx = ht->array[key_index((const unsigned char *)key, ht->size)];

    while (idx)
    {
        if (strcmp(idx->key, key) == 0)
            return (idx->value);
    }

    return (NULL);
}
