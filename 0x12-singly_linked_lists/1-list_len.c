#include <stdio.h>
#include "lists.h"

/**
 * list_len - print length of elements of linked list
 * @h: pointer to list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			h = h->next;
		i++;
	}
	return (i);
}
