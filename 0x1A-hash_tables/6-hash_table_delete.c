#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr_hash_node;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			curr_hash_node = ht->array[i];
			free(curr_hash_node->key);
			free(curr_hash_node->value);
			ht->array[i] = ht->array[i]->next;
			free(curr_hash_node);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
