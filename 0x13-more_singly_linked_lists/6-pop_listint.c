#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to listint_t list
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int w;

	if (!head || !*head)
		return (0);

	w = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head  = temp;

	return (w);
}
