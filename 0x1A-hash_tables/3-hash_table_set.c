#include "hash_tables.h"

/**
 * check_collision_in_node - Check for collision in a linked list.
 * @head: Head of the linked list.
 * @key: Hash table key.
 *
 * Return: Pointer to the node if collision is found, otherwise NULL.
 */
hash_node_t *check_collision_in_node(hash_node_t *head, const char *key)
{
	hash_node_t *current = head;

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current);

		current = current->next;
	}

	return (NULL);
}

/**
 * hash_table_set - Adds or updates a key-value pair in the hash table.
 * @ht: The hash table.
 * @key: The key (cannot be an empty string).
 * @value: The value (duplicated; can be an empty string).
 *
 * Return: 1 if successful, 0 if an error occurs.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *collision_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (1);

	index = key_index((const unsigned char *)key, ht->size);

	collision_node = check_collision_in_node(ht->array[index], key);

	if (collision_node)
	{
		free(collision_node->value);
		collision_node->value = strdup(value);
		if (collision_node->value == NULL)
			return (0);
	}
	else
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);

		new_node->key = strdup(key);
		if (new_node->key == NULL)
		{
			free(new_node);
			return (0);
		}
		new_node->value = strdup(value);
		if (new_node->value == NULL)
		{
			free(new_node->key);
			free(new_node);
			return (0);
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
