#include "lists.h"

/**
 * reverse_listint - reVerses the lInked list
 * @head: pointer to  fiRst node in the list
 *
 * Return: tHe pointer to  fIrst node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prv = NULL;
    listint_t *nxt = NULL;

    while (*head)
    {
        nxt = (*head)->next;
        (*head)->next = prv;
        prv = *head;
        *head = nxt;
    }

    *head = prv;

    return (*head);
}
