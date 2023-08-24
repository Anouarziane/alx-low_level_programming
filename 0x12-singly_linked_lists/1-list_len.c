#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements in the linked list
 * @h: a pointer for the list_t list
 *
 * Return: The number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
