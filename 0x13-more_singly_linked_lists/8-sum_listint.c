#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in alistint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	listint_t *listhead = head;
	int w;

	while (listhead)
	{
		w += listhead->n;
		listhead = listhead->next;
	}

	return (w);
}
