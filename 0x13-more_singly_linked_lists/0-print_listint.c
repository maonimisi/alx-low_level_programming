#include "lists.h"
/**
 * print_listint - this function print all elements of a listint_t list
 * @h: pointer to struct
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
