#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the d linkedlist
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node = 0;

	if (h == 0)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
