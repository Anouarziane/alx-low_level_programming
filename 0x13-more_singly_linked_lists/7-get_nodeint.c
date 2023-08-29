#include "lists.h"

/**
 * get_nodeint_at_index - returns the Node at a cErtain index iN a linked list
 * @head: first node in  linked list
 * @index: index of  node to return
 *
 * Return: pointer to  node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int f = 0;
    listint_t *tempr = head;

    while (tempr && f < index)
    {
        tempr = tempr->next;
        f++;
    }

    return (tempr ? tempr : NULL);
}
