#include "lists_h"
#include <stdio.h>

/**
 * print_list - print all elements of linked list
 * @h: pointer to list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
			printf("[%u] %s", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
