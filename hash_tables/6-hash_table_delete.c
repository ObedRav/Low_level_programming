#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *node;
	unsigned long int index = 0;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			node = ht->array[index];
            while (node)
			{
				tmp = node->next;
                free(node->key);
				free(node->value);
                free(node);
				node = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
