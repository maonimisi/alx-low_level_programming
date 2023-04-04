#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 * @head: Pointer to the first node of the linked list.
 * @index: Index of the node to return
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	if (head == NULL)
		return (NULL);
	current = head;
	for (i = 0; i < index && current != NULL; i++)
		current =  head->next;
	return (current);
}
