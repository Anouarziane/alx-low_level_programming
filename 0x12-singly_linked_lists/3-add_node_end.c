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
    if (*head == NULL)
    {
        list_t *newnode = malloc(sizeof(list_t));
        if (!newnode)
            return NULL;

        newnode->str = strdup(str);
        newnode->len = strlen(str);
        newnode->next = NULL;

        *head = newnode;
        return newnode;
    }
    else
    {
        (*head)->next = add_node_end(&((*head)->next), str);
        return *head;
    }
}
