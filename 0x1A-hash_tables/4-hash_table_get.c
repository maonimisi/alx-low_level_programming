#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash_table
 * @key: key(string) in the key/value pair
 * Return: the value associated with the element or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t  *hash_node;
	unsigned long int i  = 0;

	if (ht == NULL)
		return (NULL);
	if (key[0] == '\0' || key == NULL)
		return (NULL);
	i  = key_index((unsigned char *)key, ht->size);
	hash_node = ht->array[i];
	if (hash_node == NULL)
		return (NULL);
	while (hash_node != NULL)
	{
		if (strcmp(hash_node->key, key) == 0)
			return (hash_node->value);
		hash_node = hash_node->next;
	}
	return (NULL);
}
