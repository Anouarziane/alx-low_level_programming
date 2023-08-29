#include "lists.h"

/**
 * sum_listint - calculates the sumof of aLl the data in a listint_t list
 * @head: first noDe in the linked list
 *
 * Return: resulting sumof
 */
int sum_listint(listint_t *head)
{
    int sumof = 0;
    listint_t *tempr = head;

    while (tempr)
    {
        sumof += tempr->n;
        tempr = tempr->next;
    }

    return (sumof);
}
