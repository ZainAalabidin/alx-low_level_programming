#include "lists.h"

/**
 * get_nodeint_at_index -  a function that returns the nth node index
 * @head : pointer to linnked list
 * @index : index of the node have to return
 *
 * Return: poiner to the node we are lookin fotr , or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c;
	listint_t *listhead = head;

	while (listhead && c < index)
	{
		listhead = listhead->next;
		c++;
	}

	return (listhead ? listhead : NULL);
}
