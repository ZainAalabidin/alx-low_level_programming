#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index of a,
 * linked list.
 * @head: pointer to pointer to the h of linked list.
 * @index: ndex of the node that should be deleted. Index starts at 0.
 *
 * Return: if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;
	dlistint_t *h2;
	unsigned int c;

	h1 = *head;

	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;
	c = 0;

	while (h1 != NULL)
	{
		if (c == index)
		{
			if (c == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;

				if (h1->next != NULL)
					h1->next->prev = h2;
			}
			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		c++;
	}
	return (-1);
}