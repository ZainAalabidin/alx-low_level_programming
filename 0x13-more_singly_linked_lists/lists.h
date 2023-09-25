#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>

/**
 * struct listint_s - single linked list
 * @n: data of the node
 * @next: address of next node
 *
 * Description: singly linked list node structure
 * fot alx project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
#endif
