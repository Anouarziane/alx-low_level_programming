#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a newnw Node in a linked list,
 * at a given position
 * @head: pointer  tHe first node in the list
 * @idx: index where  new Node is added
 * @n: data to insert inside tHe new node
 *
 * Return: pointer to  new noDe, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int f;
    listint_t *newnw;
    listint_t *tempr = *head;

    newnw = malloc(sizeof(listint_t));
    if (!newnw || !head)
        return (NULL);

    newnw->n = n;
    newnw->next = NULL;

    if (idx == 0)
    {
        newnw->next = *head;
        *head = newnw;
        return (newnw);
    }

    for (f = 0; tempr && f < idx; f++)
    {
        if (f == idx - 1)
        {
            newnw->next = tempr->next;
            tempr->next = newnw;
            return (newnw);
        }
        else
            tempr = tempr->next;
    }

    return (NULL);
}
