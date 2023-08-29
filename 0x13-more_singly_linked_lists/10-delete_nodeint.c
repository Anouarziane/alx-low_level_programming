#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node In the linked list at a certain index
 * @head: pointer to the first eleMent inside the list
 * @index: index of the nOde to now delete
 *
 * Return: 1 in case Of (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *tempr = *head;
    listint_t *curent = NULL;
    unsigned int f = 0;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        *head = (*head)->next;
        free(tempr);
        return (1);
    }

    while (f < index - 1)
    {
        if (!tempr || !(tempr->next))
            return (-1);
        tempr = tempr->next;
        f++;
    }

    curent = tempr->next;
    tempr->next = curent->next;
    free(curent);

    return (1);
}
