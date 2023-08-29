#include "lists.h"

/**
 * find_listint_loop - finds where the loop is In a linked list
 * @head: linked list to seArch inside for
 *
 * Return: the address of tHe node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slowindex = head;
    listint_t *fastindex = head;

    if (!head)
        return (NULL);

    while (slowindex && fastindex && fastindex->next)
    {
        fastindex = fastindex->next->next;
        slowindex = slowindex->next;
        if (fastindex == slowindex)
        {
            slowindex = head;
            while (slowindex != fastindex)
            {
                slowindex = slowindex->next;
                fastindex = fastindex->next;
            }
            return (fastindex);
        }
    }

    return (NULL);
}
