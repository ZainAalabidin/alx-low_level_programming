#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - add  node after endexed node
 * @head: pointer to linked listint list
 * @idx: index where the node added
 * @n : data to insert in the new node
 *
 * Return: data to insert in the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *listhead = *head;
	unsigned int c;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (c = 0; listhead && c < idx; c++)
	{
		if (c == idx - 1)
		{
			newnode->next = listhead->next;
			listhead->next = newnode;
			return (newnode);
		}
		else
			listhead = listhead->next;
	}

	return (NULL);
}
