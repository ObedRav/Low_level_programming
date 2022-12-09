#include "hash_tables.h"

/**
 * hash_table_set - function that retrieves a value associated with a key
 * @ht: tha hash table
 * @key: the key
 * @value: the value
 * Return: value assocuated with the element or NULL if key couldn't be found
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp = NULL, *aux = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !value || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = malloc(sizeof(hash_node_t));
	if (!tmp)
		return (0);
	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = NULL;
	if (!tmp->value || !tmp->key)
	{
		free(tmp->key);
		free(tmp->value);
		free(tmp);
		return (0);
	}
	if (!ht->array[index])
	{
		ht->array[index] = tmp;
		return (1);
	}
	aux = ht->array[index];
	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			ht->array[index]->value = (char *)strdup(value);
			return (1);
		}
		aux = aux->next;
	}
	ht->array[index] = tmp;
	return (1);
}
