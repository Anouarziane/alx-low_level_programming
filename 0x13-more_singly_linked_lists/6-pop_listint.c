#include "lists.h"

/**
 * pop_listint - Deletes tHe Head node of a linked list.
 * @head: Pointer to first element in the linked list.
 *
 * Return: The data that is  inside the element that was deleted,
 *         or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int deleted_data;

    if (!head || !*head)
        return (0);

    deleted_data = (*head)->n;
    temp = (*head)->next;
    free(*head);
    *head = temp;

    return (deleted_data);
}
