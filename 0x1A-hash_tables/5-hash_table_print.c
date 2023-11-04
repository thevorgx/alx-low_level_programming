#include "hash_tables.h"

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
			pcount++;
			node = node->next;
		}
	}

	printf("}\n");
}
