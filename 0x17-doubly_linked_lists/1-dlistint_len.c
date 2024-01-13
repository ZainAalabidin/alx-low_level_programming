#include "lists.h"
/**
 * dlistint_len - unction that returns the number of elements in a list.
 * @h: pointer to the head to the list.
 * Return:  number of elements in a linked dlistint_t list.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
    /*while loop for itarating*/
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);

}
