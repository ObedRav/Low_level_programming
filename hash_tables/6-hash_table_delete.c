#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *aux;
	unsigned long int index = 0;

	if (!ht)
		return;

	while (index < ht->size)
	{
		tmp = ht->array[index];
		if (ht->array[index])
		{
			while (tmp)
			{
				aux = tmp->next;
				free(tmp->value);
				free(tmp->key);
				free(tmp);
				tmp = aux;
			}
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
