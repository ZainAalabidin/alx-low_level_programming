#include "lists.h"
/**
 * print_dlistint - function that prints all the elemts of a doubly linked list
 * @h: poiner to the head of the list
 *
 * Return: return 0
 */

size_t print_dlistint(const dlistint_t *h){

	size_t count = 0;
	
	while (h != NULL) {
		printf("%d\n", h->n);
		h = h->next;
		count += 1
	}

	return 0;
}