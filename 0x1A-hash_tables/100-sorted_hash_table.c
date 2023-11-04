#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
     char *key;
     char *value;
     struct shash_node_s *next;
     struct shash_node_s *sprev;
     struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
     unsigned long int size;
     shash_node_t **array;
     shash_node_t *shead;
     shash_node_t *stail;
} shash_table_t;

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: A pointer to the newly created hash table, or NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));

	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	table->array[i] = NULL;

	return (table);
}

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

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
		return (0);

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
		idx = idx->next;
	}

	return (NULL);
}

/**
 * hash_table_print - Prints the contents of a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	int pcount = 0;
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; ++i)
	{
		node = ht->array[i];
		while (node)
		{
			if (pcount == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			pcount = 1;
			node = node->next;
		}
	}

	printf("}\n");
}


/**
 * hash_table_delete - Deletes a hash table and its elements.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;
	hash_node_t *tmp;


	for (i = 0; i < ht->size; ++i)
	{
		current_node = ht->array[i];

		while (current_node)
		{
			tmp = current_node;
			current_node = current_node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	if (ht->array != NULL)
		free(ht->array);
	if (ht != NULL)
		free(ht);
}
