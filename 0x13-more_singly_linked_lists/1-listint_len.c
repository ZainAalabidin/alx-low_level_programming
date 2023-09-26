#include "lists.h"

/**
 * listint_len - function return number of nodes in the list
 * @h: linked list of list int_t
 *
 * Return: number of node of the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
