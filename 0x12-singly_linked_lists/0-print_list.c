#include <stdio.h>
#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose lenght need to be checked 
 *
 * Return: The integer length of th string
 */
int _strlen(char *s)
{
	int a = 0;

	if (!s)
		return (0);
	while (*s++)
		a++;
	return (a);
}

/**
 * print_list - print linked list
 * @h : pointer of the first node
 *
 * Return: size of the list
 */
size_t print-list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (a);
}

