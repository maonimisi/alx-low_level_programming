#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the current list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
