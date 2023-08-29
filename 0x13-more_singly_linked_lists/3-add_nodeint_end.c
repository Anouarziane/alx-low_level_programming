#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: Pointer to  first element in the list.
 * @n: Data to insert in to the new element.
 *
 * Return: Pointer to  new node, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *newnd;
    listint_t *tmp = *head;

    newnd = malloc(sizeof(listint_t));
    if (!newnd)
        return (NULL);

    newnd->n = n;
    newnd->next = NULL;

    if (*head == NULL)
    {
        *head = newnd;
        return (newnd);
    }

    while (tmp->next)
        tmp = tmp->next;

    tmp->next = newnd;

    return (newnd);
}
