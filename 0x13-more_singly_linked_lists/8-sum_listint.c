#include "lists.h"
/**
* sum_listint - func return the sum of all data(n) of a listint_t
* @head: Pointer to the first node of the linked list.
* Return: Return sum, or 0 if list is empty
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
