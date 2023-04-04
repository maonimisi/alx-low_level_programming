#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prevNode, *currNode;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		currNode = *head;
		*head = currNode->next;
		free(currNode);
		return (1);
	}
	prevNode = NULL;
	currNode = *head;
	for (i = 0; i < index && currNode != NULL; i++)
	{
		prevNode = currNode;
		currNode = currNode->next;
	}
	if (i != index || currNode == NULL)
		return (-1);
	prevNode->next = currNode->next;
	free(currNode);
	return (1);
}
