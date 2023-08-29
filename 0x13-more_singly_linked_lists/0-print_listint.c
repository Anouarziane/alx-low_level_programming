#include "lists.h"

/**
 * print_listint - prints all the elements of the linked list
 * @h: linked list of the type listint_t to print
 *
 * Return: number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nm++;
		h = h->next;
	}

	return (nm);
}
