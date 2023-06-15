#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the current dlistint_t list
 * @idx: index the new node will be inserted -- counting from 0
 * @n: value of the new node
 * Return: address of the new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = *h;
	dlistint_t *new_node;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (current_node != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = current_node->next;
			new_node->prev = current_node;
			if (current_node->next != NULL)
				current_node->next->prev = new_node;
			current_node->next = new_node;
			return (new_node);
		}
		current_node = current_node->next;
		i++;
	}
	if (i == idx && current_node == NULL)
	{
		new_node->next = NULL;
		new_node->prev = *h;
		(*h)->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
