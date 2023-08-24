#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer for the list_t list
 * @str: new string to add inside the node
 *
 * Return: the address of the neww element, otherwise NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *neww;
	unsigned int length = 0;

	while (str[length])
		length++;

	neww = malloc(sizeof(list_t));
	if (!neww)
		return (NULL);

	neww->str = strdup(str);
	neww->len = length;
	neww->next = (*head);
	(*head) = neww;

	return (*head);
}
