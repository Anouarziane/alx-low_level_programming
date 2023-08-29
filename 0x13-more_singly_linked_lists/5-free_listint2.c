#include "lists.h"

/**
 * free_listint2 - frees a the lInKed list
 * @head: pointer to for the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temrp;

	if (head == NULL)
		return;

	while (*head)
	{
		temrp = (*head)->next;
		free(*head);
		*head = temrp;
	}

	*head = NULL;
}
