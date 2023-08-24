#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add the new node at the end of the linked list
 * @head: double pointer for the list_t list
 * @str: string to put inside the new node
 *
 * Return: address of new element, or NULL in case it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *newnode;
    list_t *tmp = *head;
    unsigned int length = 0;

    while (str[length])
        length++;

    newnode = malloc(sizeof(list_t));
    if (!newnode)
        return (NULL);

    newnode->str = strdup(str);
    newnode->length = length;
    newnode->next = NULL;

    if (*head == NULL)
    {
        *head = newnode;
        return (newnode);
    }

    while (tmp->next)
        tmp = tmp->next;

    tmp->next = newnode;

    return (newnode);
}
