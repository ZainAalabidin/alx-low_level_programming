#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str:string - (malloc'ed sring)
 * @len: length of string
 * @next: point to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
