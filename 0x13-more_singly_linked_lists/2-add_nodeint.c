#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of a linked list
 * @head: pointer to first node in the list
 * @n: data to insert in to that new node
 *
 * Return: pointer to the now new node, or return  NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnd;

	newnd = malloc(sizeof(listint_t));
	if (!newnd)
		return (NULL);

	newnd->n = n;
	newnd->next = *head;
	*head = newnd;

	return (newnd);
}
