#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head : firt element in the list
 *
 * Return: no thing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
