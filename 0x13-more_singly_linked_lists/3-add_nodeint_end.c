#include "lists.h"
/**
 * add_nodeint_end - func to a new node at the end of a listint_t list
 * @head: pointer to a pointer to the beginning of the listint_t list
 * @n: value of n member of new node
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *cur_node = *head;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (cur_node->next != NULL)
	{
		cur_node = cur_node->next;
	}
	cur_node->next = new_node;
	return (new_node);
}
