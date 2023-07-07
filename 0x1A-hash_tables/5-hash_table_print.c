#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr_hash_node;
	unsigned long int i = 0;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i  = 0; i < ht->size; i++)
	{
		curr_hash_node = ht->array[i];
		while (curr_hash_node != NULL)
		{
			if (flag == 1)
				printf(",");
			printf("'%s': '%s'",
				curr_hash_node->key, curr_hash_node->value);
			flag = 1;
		curr_hash_node = curr_hash_node->next;
		}
	}
	printf("}\n");
}
