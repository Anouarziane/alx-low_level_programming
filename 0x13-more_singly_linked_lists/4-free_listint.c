#include "lists.h"

/**
 * free_listint - frees the Linked list
 * @head: listint_t Iist that need to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
