#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the linked list
 * @head: double pointer to the list_t list (pointer to the head pointer)
 * @str: new string to add to the new node
 *
 * Return: address of the new element or return NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
    if (str == NULL)
        return NULL;

    list_t *newlink = malloc(sizeof(list_t));
    if (newlink == NULL)
        return NULL;

    newlink->str = strdup(str);
    if (newlink->str == NULL)
    {
        free(newlink);
        return NULL;
    }

    newlink->len = strlen(str);
    newlink->next = *head;
    *head = newlink;

    return newlink;
}
