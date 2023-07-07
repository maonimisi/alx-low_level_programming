#include "hash_tables.h"
/**
 * hash_table_set - adds an element to a hash table
 * @ht: the hash table we wish to add key/value pair element to
 * @key: the key(string)
 * @value: the value associated with the key
 * Return: 1 if successful, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash_node, *curr_hash_node;
	unsigned long int i;

	if (ht == NULL)
		return (0);
	if (key == NULL || key[0] == '\0')
		return (0);
	if (ht->size == 0 || ht->array == NULL)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	curr_hash_node = ht->array[i];
	while (curr_hash_node != NULL)
	{
		if (strcmp(curr_hash_node->key, key) == 0)
		{
			free(curr_hash_node->value);
			curr_hash_node->value = strdup(value);
			return (1);
		}
		curr_hash_node = curr_hash_node->next;
	}
	new_hash_node = malloc(sizeof(hash_node_t));
	if (new_hash_node == NULL)
		return (0);
	new_hash_node->key = strdup(key);
	if (new_hash_node->key == NULL)
	{
		free(new_hash_node);
		return (0);
	}
	new_hash_node->value = strdup(value);
	if (new_hash_node->value == NULL)
	{
		free(new_hash_node->key);
		free(new_hash_node);
		return (0);
	}
	new_hash_node->next = ht->array[i];
	ht->array[i] = new_hash_node;
	return (1);
}
